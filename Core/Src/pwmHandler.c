/*
 * pwmHandler.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pwmHandler.h"
#include "pwm.h"
#include "diag.h"



void pwmHandlerProcess(uint8_t hasError, SystemState_t state)
{
if(hasError)
{
pwmDisable();
}
else if (state == STATE_CHARGE || state == STATE_DISCHARGE)
{
pwmEnable();
}
}
