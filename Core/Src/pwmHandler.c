/*
 * pwmHandler.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pwmHandler.h"
#include "pwm.h"
#include "diag.h"

extern SystemState_t currentState;



void pwmHandlerProcess(uint8_t hasError, SystemState_t state)
{
if(hasError == 1 || state == STATE_INIT || state == STATE_IDLE || state == STATE_PRECHARGE)
{
#ifndef TEST_UNITY
pwmDisable();
#endif

currentState = STATE_INIT;
}
else if (state == STATE_CHARGE)
{
#ifndef TEST_UNITY
pwmEnable();
#endif

currentState = STATE_CHARGE;
}
else if (state == STATE_DISCHARGE)
{
#ifndef TEST_UNITY
pwmEnable();
#endif

currentState = STATE_DISCHARGE;
}
}
