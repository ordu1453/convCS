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


static PID_t currentPid;
static SystemState_t currentState = STATE_IDLE;
static uint32_t lastMode = 0xFFFFFFFF;
static uint32_t globalErrorMask = ERR_NONE;


void converterInit(void)
{
sensorInit();
diagInit();
pwmHandlerInit();
prechargeInit();


// load PWM ARR
uint32_t arr = pwmGetArr();
pidInit(&currentPid, 0.01f, 0.001f, 0.0f, 0.0f, (float)arr);


// call pwm disable until safe
pwmDisable();
}


void converterProcess(SystemState_t state)
{
const SensorValues_t* s = sensorGetValues();
uint32_t errMask=ERR_NONE;
uint8_t hasErr = diagCheck(s, &errMask);
globalErrorMask = errMask;


// mode change -> reset pid
if((uint32_t)state != lastMode)
{
pidReset(&currentPid);
lastMode = (uint32_t)state;
}


// run PID only in charge/discharge
if(state == STATE_CHARGE)
{
// Example: setpoint could come from CAN. Here placeholder
float setpoint = 1000.0f; // mV or other unit depending on design
float measurement = (float)s->voltageOut;
// dt in seconds
float dt = ((float)CONTROL_DT_MS)/1000.0f;
float duty = pidUpdate(&currentPid, setpoint, measurement, dt);
pwmSetDuty((uint32_t)duty);
}
else if(state == STATE_DISCHARGE)
{
float setpoint = -1000.0f; // for example
float measurement = (float)s->currentOutput;
float dt = ((float)CONTROL_DT_MS)/1000.0f;
float duty = pidUpdate(&currentPid, setpoint, measurement, dt);
pwmSetDuty((uint32_t)duty);

}


// precharge
if(state == STATE_PRECHARGE && currentState != STATE_PRECHARGE)
{
prechargeStart();
}
}
