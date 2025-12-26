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
uint8_t prechargeStart = 0;

void prechargeInit(void)
{
// Configure pin in CubeMX or here if required. Assume configured.
prechargeDone = 0;
}

void setPrechargeDone(uint8_t state)
{
	prechargeDone = state;
//	return prechargeDone;
}

void setPrechargeStart(uint8_t state)
{
	prechargeStart = state;
//	return prechargeStart;
}

int getPrechargeStart(){
	return prechargeStart;
}

int getPrechargeState(){
	return prechargeDone;
}

void prechargeStartFunc()
{
//if(prechargeDone) {
//	return;
//}
//else{

#ifndef TEST_UNITY
HAL_GPIO_TogglePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin);
//HAL_Delay(500); // 5 seconds blocking start; could be made non-blocking
int i = 0;
while (i<1000000000)
{
	i++;
}
HAL_GPIO_TogglePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin);
#endif
prechargeDone = 1;
//}
}
