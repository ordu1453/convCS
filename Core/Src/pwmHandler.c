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
if(hasError)
{
pwmDisable();
currentState = STATE_INIT;
}
else if (state == STATE_CHARGE)
{
pwmEnable();
currentState = STATE_CHARGE;
}
else if (state == STATE_DISCHARGE)
{
pwmEnable();
currentState = STATE_DISCHARGE;
}
}
