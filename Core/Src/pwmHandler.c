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
if(hasError == 1)
{
	pwmDisable();
	currentState = STATE_INIT;
}
else if(state == STATE_INIT || state == STATE_IDLE || state == STATE_PRECHARGE)
{
pwmDisable();
currentState = state;
}
else if (state == STATE_CHARGE)
{
pwmEnableCharge();

currentState = state;
}
else if (state == STATE_DISCHARGE)
{
pwmEnableDischarge();
currentState = state;
}
}
