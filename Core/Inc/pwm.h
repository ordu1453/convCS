/*
 * pwm.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_PWM_H_
#define INC_PWM_H_

#include <stdint.h>


void pwmInit(void);
void pwmSetDuty(uint32_t duty);
uint32_t pwmGetArr(void);
void pwmDisable(void);
void pwmEnable(void);

#endif /* INC_PWM_H_ */
