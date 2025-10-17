/*
 * pwmHandler.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pwmHandler.h"
#include "pwm.h"
#include "diag.h"



void pwmHandlerProcess(uint32_t errorMask)
{
if(errorMask != ERR_NONE)
{
pwmDisable();
}
else
{
pwmEnable();
}
}
