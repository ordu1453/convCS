/*
 * converter.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "converter.h"
#include "sensor.h"
#include "diag.h"
#include "pid.h"
#include "pwmHandler.h"
#include "precharge.h"
#include "pwm.h"
#include "config.h"
#include "types.h"
#include "can.h"


#include <stdint.h>


static PIController_t currentPid;
SystemState_t currentState = STATE_INIT;
static uint32_t lastMode = 0xFFFFFFFF;
static uint32_t globalErrorMask = ERR_NONE;


void converterInit(void)
{
sensorInit();
diagInit();
prechargeInit();


// load PWM ARR
uint32_t arr = pwmGetArr();
piInit(&currentPid, 0.01f, 0.001f, CONTROL_DT_MS, 0.0f, (float)arr);


// call pwm disable until safe
pwmDisable();
}

SystemState_t ConverterGetState(void) {
    return currentState;
}


void converterProcess(SystemState_t state)
{
sensorRead();
const SensorValues_t* s = sensorGetValues();
uint32_t errMask=ERR_NONE;
uint8_t hasErr = diagCheck(s, &errMask);
globalErrorMask = errMask;


// mode change -> reset pid
if((uint32_t)state != lastMode)
{
piReset(&currentPid);
lastMode = (uint32_t)state;
}

pwmHandlerProcess(hasErr, state);

// run PID only in charge/discharge
if(state == STATE_CHARGE)
{
// Example: setpoint could come from CAN. Here placeholder
float setpoint = 1000.0f; // mV or other unit depending on design
float measurement = (float)s->voltageOut;
// dt in seconds
float duty = piUpdate(&currentPid, setpoint, measurement);
pwmSetDuty((uint32_t)duty);
}
else if(state == STATE_DISCHARGE)
{
float setpoint = -1000.0f; // for example
float measurement = (float)s->currentOut;
float duty = piUpdate(&currentPid, setpoint, measurement);
pwmSetDuty((uint32_t)duty);

}


// precharge
if(state == STATE_PRECHARGE && currentState != STATE_PRECHARGE)
{
	currentState = STATE_PRECHARGE;
	prechargeStart();
	if (!hasErr){
		currentState = STATE_IDLE;
	}
	else
	{
		currentState = STATE_INIT;
	}
	}

canPublishTelemetry(currentState, errMask,  s);
}

