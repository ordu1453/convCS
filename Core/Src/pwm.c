/*
 * pwm.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pwm.h"
#include "stm32g4xx_hal.h"


extern TIM_HandleTypeDef htim1; // configured for PWM


void pwmInit(void)
{
// TIM1 presumed configured via CubeMX in PWM mode
HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
}


void pwmSetDuty(uint32_t duty)
{
uint32_t arr = htim1.Instance->ARR;
if(duty > arr) duty = arr;
__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, duty);
__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, duty);
}


uint32_t pwmGetArr(void)
{
return htim1.Instance->ARR;
}


void pwmDisable(void)
{
HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);
}


void pwmEnable(void)
{
HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
}
