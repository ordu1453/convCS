/*
 * flash.h
 *
 *  Created on: Dec 16, 2025
 *      Author: ordum
 */

#ifndef INC_FLASH_H_
#define INC_FLASH_H_

#include <stdint.h>
#include "stm32g4xx_hal.h"       // HAL_StatusTypeDef


#define FLASH_VARS_ADDR ((uint32_t)&flashVarsStorage)
#define FLASH_USER_START_ADDR  0x0801F800U
#define FLASH_USER_END_ADDR    0x0801FFFFU

// Используйте адрес из линкер-скрипта
//#define FLASH_USER_START_ADDR  ((uint32_t)&flashStorage)
//#define FLASH_USER_END_ADDR    (FLASH_USER_START_ADDR + 0x7FF)  // 2KB

typedef struct
{
    uint32_t calCur1;
    uint32_t calCur2;
    int16_t  calCur3;
    int16_t  calVol1;
    uint16_t calVol2;
    uint16_t calPerf;
} FlashVars_t;

//// Переменная во FLASH
//__attribute__((section(".flash_data")))
//const FlashVars_t flashStorage;

HAL_StatusTypeDef Flash_Erase(void);
HAL_StatusTypeDef Flash_WriteVars(const FlashVars_t *vars);
void Flash_ReadVars(FlashVars_t *vars);


#endif /* INC_FLASH_H_ */
