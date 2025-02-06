/*
 * process.h
 *
 *  Created on: Jan 28, 2025
 *      Author: aordu
 */

#ifndef INC_PROCESS_H_
#define INC_PROCESS_H_

#include "main.h"
#include "flags.h"
#include "DischargeDuty.h"


#define NO_MODE 0
#define DISCHARGE 1
#define CHARGE 2

#define toggleLedGreen() GPIOB->ODR ^= (1 << 0)
#define toggleLedBlue() GPIOB->ODR ^= (1 << 7)
#define toggleLedRed() GPIOB->ODR ^= (1 << 14)

#define resetLedGreen() GPIOB->ODR &= ~(1 << 0)
#define resetLedBlue() GPIOB->ODR &= ~(1 << 7)
#define resetLedRed() GPIOB->ODR &= ~(1 << 14)

#define OVERCURRENT_ERROR 1
#define UNDERVOLTAGE_ERROR 2
#define NO_ERROR 0

extern TIM_HandleTypeDef htim1;

void initProcess(void);
void calcProcess(void);
void sensProcess(void);
void commProcess(void);
void ledProcess(void);
void errProcess(void);

void modeReset(void);
void pwmStop(void);
void pwmStart(void);

#endif /* INC_PROCESS_H_ */
