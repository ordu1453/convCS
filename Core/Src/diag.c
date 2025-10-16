/*
 * diag.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "diag.h"
#include "config.h"


void diagInit(void)
{
// any init if needed
}


uint8_t diagCheck(const SensorValues_t* s, uint32_t* errorMask)
{
uint32_t err=ERR_NONE;


if(s->voltageIn_mV > (uint32_t)(VBUS_MAX*1000.0f)) err |= ERR_OVERVOLTAGE;
if(s->voltageIn_mV < (uint32_t)(VBUS_MIN*1000.0f)) err |= ERR_UNDERVOLTAGE;


if(s->voltageOut_mV > (uint32_t)(VBUS_MAX*1000.0f)) err |= ERR_OVERVOLTAGE;
if(s->voltageOut_mV < (uint32_t)(VBUS_MIN*1000.0f)) err |= ERR_UNDERVOLTAGE;


if( (abs(s->currentInput_mA) > (int32_t)(I_MAX*1000.0f)) ||
(abs(s->currentOutput_mA) > (int32_t)(I_MAX*1000.0f)) ||
(abs(s->currentChoke_mA) > (int32_t)(I_MAX*1000.0f)) )
{
err |= ERR_OVERCURRENT;
}


// TODO: check IGBT-driver status pins if available and set ERR_IGBT_DRIVER


*errorMask = err;
return (err != ERR_NONE) ? 1 : 0;
}
