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
#include <stdio.h>


#include <stdint.h>

#ifdef TEST_UNITY
// Заглушки для юнит-тестов
SensorValues_t unitTestSensorValues;
uint32_t unitTestErrorMask;
uint8_t unitTestHasError;
extern PWMState_t currentPWMState;
#endif

#ifdef TEST_UNITY
uint32_t globalErrorMask;      // видна во всех тестах
#else
static uint32_t globalErrorMask = ERR_NONE;
#endif

SystemState_t currentState = STATE_INIT;
PIController_t currentPid;
uint32_t lastMode = 0xFFFFFFFF;



#ifndef TEST_UNITY
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
#endif

SystemState_t ConverterGetState(void) {
    return currentState;
}


void converterProcess(SystemState_t state)
{
#ifdef TEST_UNITY
    printf("Converter process running\n");
#endif


#ifndef TEST_UNITY
    sensorRead();
    const SensorValues_t* s = sensorGetValues();
    uint32_t errMask = ERR_NONE;
    uint8_t hasErr = diagCheck(s, &errMask);
#else
	printf("Variable setting\n");
    // Заглушка для юнит-тестов
    const SensorValues_t* s = &unitTestSensorValues;
    uint32_t errMask = unitTestErrorMask;
    uint8_t hasErr = unitTestHasError;
    printf("System has error: %d\n", unitTestHasError);
    printf("System state: %d\n", currentState);
#endif


    globalErrorMask = errMask;
#ifdef TEST_UNITY
	printf("Global error mask setted\n");
#endif
    // mode change -> reset pid
    if ((uint32_t)state != lastMode)
    {
        piReset(&currentPid);
        lastMode = (uint32_t)state;
    }
#ifdef TEST_UNITY
	printf("Last mode setted\n");
#endif

#ifdef TEST_UNITY
	printf("PWM Handler running\n");
#endif
    pwmHandlerProcess(hasErr, state);
    printf("System state: %d\n", currentState);
    printf("PWM state: %d\n", currentPWMState);

    // run PID only in charge/discharge
    if (state == STATE_CHARGE)
    {
#ifdef TEST_UNITY
	printf("PI-regulator evaluating\n");
#endif
        float setpoint = 1000.0f;
        float measurement = (float)s->voltageOut;
        float duty = piUpdate(&currentPid, setpoint, measurement);
#ifndef TEST_UNITY
        pwmSetDuty((uint32_t)duty);
#endif
    }
    else if (state == STATE_DISCHARGE)
    {
#ifdef TEST_UNITY
	printf("PI-regulator evaluating\n");
#endif
        float setpoint = -1000.0f;
        float measurement = (float)s->currentOut;
        float duty = piUpdate(&currentPid, setpoint, measurement);

#ifndef TEST_UNITY
        pwmSetDuty((uint32_t)duty);
#endif
    }

    // precharge
    if (state == STATE_PRECHARGE && currentState != STATE_PRECHARGE)
    {
#ifdef TEST_UNITY
	printf("Precharge mode starting\n");
#endif
        currentState = STATE_PRECHARGE;
#ifndef TEST_UNITY
        prechargeStart();
#endif
        if (!hasErr)
        {
#ifdef TEST_UNITY
	printf("No error after precharging\n");
#endif
            currentState = STATE_IDLE;
#ifdef TEST_UNITY
	printf("Entering to STATE_IDLE\n");
#endif
        }
        else
        {
#ifdef TEST_UNITY
	printf("Error found after precharging\n");
#endif
            currentState = STATE_INIT;
#ifdef TEST_UNITY
	printf("Entering to STATE_INIT\n");
#endif
        }
    }

#ifndef TEST_UNITY
    canPublishTelemetry(currentState, errMask, s);
#endif
}

