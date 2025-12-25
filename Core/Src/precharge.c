/*
 * precharge.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "precharge.h"
#include "stm32g4xx_hal.h"
#include "config.h"
#include "main.h"


// Example: use GPIO pin PA5 to drive relay
//#define PRECHARGE_GPIO_Port GPIOA
//#define PRECHARGE_Pin GPIO_PIN_10 // Relay gate gpio port


uint8_t prechargeDone = 0;

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
HAL_GPIO_WritePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin, GPIO_PIN_SET);
//HAL_Delay(500); // 5 seconds blocking start; could be made non-blocking
int i = 0;
while (i<10000)
{
	i++;
}
HAL_GPIO_WritePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin, GPIO_PIN_RESET);
#endif
prechargeDone = 1;
}
}
