/*
 * uart.c
 *
 *  Created on: Dec 26, 2025
 *      Author: ordum
 */

#include "main.h"
#include "uart.h"

extern UART_HandleTypeDef huart3; // Объявляем внешнюю переменную

/* USER CODE BEGIN PFP */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
/* USER CODE END PFP */

PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart3, (uint8_t *)&ch, 1, 0xFFFF);

  return ch;
}

/* USER CODE END 4 */

