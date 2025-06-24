/*
 * process.c
 *
 *  Created on: Jan 28, 2025
 *      Author: aordu
 */

#include "process.h"
#include "stdio.h"


static volatile uint8_t lastMode = NO_MODE;

#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)

extern UART_HandleTypeDef huart3;


void initProcess()
{
	//TODO Add initialization for system if needed
}


void calcProcess()
{

	if (GetStepFlag())
	{
		if (lastMode != GetModeFlag())
		{
			modeReset();
		}
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
		else
		{
			//TODO Add mode error flag to flag.c file
			SetErrorCode(MODE_ERROR);
		}
	}
}


void sensProcess()
{
	//TODO Read values from sensor and write them to corresponding variables
}


void sendCAN_Process()
{
	//TODO Add CAN communication and others if needed
}

void readCAN_Process()
{
	//TODO Add CAN communication and others if needed
}

void prechargeProcess()
{
	//TODO Add relay switching process
}


void ledProcess()
{
	if (GetLedFlag())
	{
		ledBlueOn();
		if (GetErrorCode() == NO_ERROR)
		{
			ledGreenOn();
			ledRedOff();
		}
		else
		{
			ledRedOn();
			ledGreenOff();
		}
	}
}


int errProcess()
{
	//TODO Add a timer for setting handler flag
	if (GetHandlerStepFlag())
	{
		errorHandler_step();
		if (errorHandler_Signals.underVoltage)
		{
			SetErrorCode(UNDERVOLTAGE_ERROR);
			pwmStop();
			return 1;
		}
		if (errorHandler_Signals.overCurrent)
		{
			SetErrorCode(OVERCURRENT_ERROR);
			pwmStop();
			return 1;
		}
		if (errorHandler_Signals.readyState)
		{
			ResetErrorCode();
			return 0;
		}
		return 1;
	}
}


void debugProcess()
{
	//TODO Create interrupt and corresponding flag specific to debugProcess
	if (GetDebugStepFlag())
	{

		uint8_t mode = GetModeFlag();
		uint8_t error = GetErrorCode();
		uint8_t pwm = GetPWMFlag();

		switch(mode)
		{
		case DISCHARGE:
			printf("MODE_D   ");
			break;
		case CHARGE:
			printf("MODE_C   ");
			break;
		case NO_MODE:
			printf("MODE_N   ");
			break;
		default:
			printf("MODE_ERROR   ");
			break;
		}

		switch(error)
		{
		case UNDERVOLTAGE_ERROR:
			printf("ERR_UNDRV   ");
			break;
		case OVERCURRENT_ERROR:
			printf("ERR_OVRCUR   ");
			break;
		case NO_ERROR:
			printf("ERR_NOERR   ");
			break;
		}


		switch(pwm)
		{
		case PWM_ON:
			printf("PWM_ON   ");
			break;
		case PWM_OFF:
			printf("PWM_OFF   ");
			break;
		}

		printf("\n\r");

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
	SetPWMFlag();

	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_1);

}


void pwmStop()
{
	ResetErrorCode();

	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);

	//TODO Should we set duty to zero in case of pwm stopping?
}



/**
  * @brief  Retargets the C library printf function to the USART.
  *   None
  * @retval None
  */
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart3, (uint8_t *)&ch, 1, 0xFFFF);

  return ch;
}
