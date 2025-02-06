/*
 * process.c
 *
 *  Created on: Jan 28, 2025
 *      Author: aordu
 */

#include "process.h"


static volatile uint8_t lastMode = NO_MODE;

void initProcess()
{
	//TODO Add initialization for system
}


void calcProcess()
{
	if (lastMode != GetModeFlag())
	{
		modeReset();
	}
	if (GetStepFlag())
	{
		if (GetModeFlag() == DISCHARGE)
		{
			DischargeDuty_step();
			lastMode = DISCHARGE;
		}
		else if (GetModeFlag() == CHARGE)
		{
			//ChargeDuty_step();
			//TODO Add ChargeDuty.h and ChargeDuty.c files, then uncomment ChargeDuty_Step()
			lastMode = CHARGE;
		}
		else if (GetModeFlag() == NO_MODE)
		{
			//TODO Add some functionality here
			lastMode = NO_MODE;
		}
	}
}


void sensProcess()
{
	//TODO Read values from sensor and write them to corresponding variables
}


void commProcess()
{
	//TODO Add CAN communication and others if needed
}


void ledProcess()
{
	if (GetLedFlag())
	{
		toggleLedBlue();
		if (GetErrorCode() == NO_ERROR)
		{
			toggleLedGreen();
			resetLedRed();
			pwmStart();
		}
		else
		{
			toggleLedRed();
			resetLedGreen();
			pwmStop();
		}
	}
}


void errProcess()
{
	//TODO Add error processing procedures according to errorHandler.c file
}


void modeReset() //Integrator value reset function
{
	rtDW.DischargeIntegrator_DSTATE = 0;
	rtDW.DischargeIntegrator1_DSTATE = 0;

	//TODO Add integrator reset for charge mode also
}


void pwmStart()
{
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_1);
}


void pwmStop()
{
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);
}



