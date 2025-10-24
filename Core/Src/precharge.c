/*
 * precharge.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "precharge.h"
#include "stm32g4xx_hal.h"
#include "config.h"


// Example: use GPIO pin PA5 to drive relay
#define PRECHARGE_GPIO_Port GPIOA
#define PRECHARGE_Pin GPIO_PIN_10 // Relay gate gpio port


uint8_t prechargeDone;

void prechargeInit(void)
{
// Configure pin in CubeMX or here if required. Assume configured.
prechargeDone = 0;
}


void prechargeStart(void)
{
if(prechargeDone) {
	return;
}
else{

#ifndef TEST_UNITY
HAL_GPIO_WritePin(PRECHARGE_GPIO_Port, PRECHARGE_Pin, GPIO_PIN_SET);
HAL_Delay(5000); // 5 seconds blocking start; could be made non-blocking
HAL_GPIO_WritePin(PRECHARGE_GPIO_Port, PRECHARGE_Pin, GPIO_PIN_RESET);
#endif
prechargeDone = 1;
}
}
