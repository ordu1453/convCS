/*
 * interrupt.c
 *
 *  Created on: Oct 14, 2025
 *      Author: ordum
 */



/* main idea of program
 * 1. init_func (called only once when device starts)
 * 2. adc calculations for sensors evaluation (must be called at the same frequency as main_func)
 * 3. main_func (probably can be called in the same interrupt handler as adc channel to simplify the architecture of code)
 * 4. communication_func (small-priority code for can and igbt-driver communication processing)
 * 5. error handler (code with even less priority for current, voltage and communication error observing. can be called in
 * interrupt with small priority
 *
 *
 * program sequence:
 *
 *
 * */
#include "main.h"
#include "control.h"

uint16_t i = 0; // frequency of adc measurement

void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
{
    if(htim->Instance == TIM1)
    {
        if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_4)
        {
        	if (i == 100)
        	{
        		Read_ADC_Channels();
        		main_func();
        		i = 0;
        	}
        	else
        	{
        		i++;
        	}
        }
    }
}

/* TODO add another interrupt for communication and error checking
 *  dont forget that priority of this interrupt should be less than interrupt
 *  for main_func to provide correct work of program*/
