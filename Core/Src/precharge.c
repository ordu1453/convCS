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
#include "converter.h"

uint8_t prechargeDone = 0;
uint8_t prechargeStart = 0;

void prechargeInit(void)
{
	prechargeDone = 0;
}

void delay_cycles(uint32_t cycles) {
    while(cycles--) {
        __NOP();
    }
}

void setPrechargeDone(uint8_t state)
{
	prechargeDone = state;
}

void setPrechargeStart(uint8_t state)
{
	prechargeStart = state;
}

int getPrechargeStart(){
	return prechargeStart;
}

int getPrechargeState(){
	return prechargeDone;
}

void doPrecharge()
{
	if (getPrechargeStart() && !getErrorState())
	{
		HAL_GPIO_TogglePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin);
		delay_cycles(10000000);
		HAL_GPIO_TogglePin(RELAY_GATE_GPIO_Port, RELAY_GATE_Pin);
		setPrechargeDone(1);
	}
}

