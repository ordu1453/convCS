/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USER_BTN_Pin GPIO_PIN_13
#define USER_BTN_GPIO_Port GPIOC
#define LD1_GREEN_Pin GPIO_PIN_0
#define LD1_GREEN_GPIO_Port GPIOB
#define H8_ERR_Pin GPIO_PIN_12
#define H8_ERR_GPIO_Port GPIOF
#define H1_ERR_Pin GPIO_PIN_13
#define H1_ERR_GPIO_Port GPIOF
#define H2_ERR_Pin GPIO_PIN_14
#define H2_ERR_GPIO_Port GPIOF
#define H3_ERR_Pin GPIO_PIN_15
#define H3_ERR_GPIO_Port GPIOF
#define H4_ERR_Pin GPIO_PIN_0
#define H4_ERR_GPIO_Port GPIOG
#define H5_ERR_Pin GPIO_PIN_1
#define H5_ERR_GPIO_Port GPIOG
#define H6_ERR_Pin GPIO_PIN_7
#define H6_ERR_GPIO_Port GPIOE
#define H7_ERR_Pin GPIO_PIN_8
#define H7_ERR_GPIO_Port GPIOE
#define LD3_RED_Pin GPIO_PIN_14
#define LD3_RED_GPIO_Port GPIOB
#define RELAY_GATE_Pin GPIO_PIN_9
#define RELAY_GATE_GPIO_Port GPIOD
#define LD2_BLUE_Pin GPIO_PIN_7
#define LD2_BLUE_GPIO_Port GPIOB
#define TEST_Pin GPIO_PIN_0
#define TEST_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
