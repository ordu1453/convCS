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
			ChargeDuty_step();
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
	//TODO Add a timer for setting handler flag
	if (GetHandlerStepFlag())
	{
		errorHandler_step();
		if (errorHandler_Signals.underVoltage)
		{
			SetErrorCode(UNDERVOLTAGE_ERROR);
		}
		if (errorHandler_Signals.overCurrent)
		{
			SetErrorCode(OVERCURRENT_ERROR);
		}
		if (errorHandler_Signals.readyState)
		{
			SetErrorCode(NO_ERROR);
		}
	}
}


void modeReset() //Integrator value reset function
{
	rtDW.DischargeIntegrator_DSTATE = 0;
	rtDW.DischargeIntegrator1_DSTATE = 0;

	rtDW1.ChargeIntegrator_DSTATE = 0;
	rtDW1.ChargeIntegrator1_DSTATE = 0;

	//TODO What else should be reseted in the case of mode change?
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

	//TODO Should we set duty to zero in case of pwm stopping?
}



