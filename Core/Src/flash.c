/*
 * flash.c
 *
 *  Created on: Dec 16, 2025
 *      Author: ordum
 */

#include "flash.h"
#include <string.h>

__attribute__((section(".flash_data")))
FlashVars_t flashStorage;  // именно здесь секция

HAL_StatusTypeDef Flash_Erase(void)
{
    FLASH_EraseInitTypeDef erase;
    uint32_t pageError = 0;

    erase.TypeErase = FLASH_TYPEERASE_PAGES;
    erase.Banks     = FLASH_BANK_1;
    erase.NbPages   = 1;

    HAL_FLASH_Unlock();
    HAL_StatusTypeDef status = HAL_FLASHEx_Erase(&erase, &pageError);
    HAL_FLASH_Lock();

    return status;
}

HAL_StatusTypeDef Flash_WriteVars(const FlashVars_t *vars)
{
    uint32_t address = FLASH_USER_START_ADDR;
    const uint64_t *data64 = (const uint64_t *)vars;

    HAL_FLASH_Unlock();

    for (uint32_t i = 0; i < sizeof(FlashVars_t); i += 8)
    {
        if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD,
                              address,
                              *data64) != HAL_OK)
        {
            HAL_FLASH_Lock();
            return HAL_ERROR;
        }

        address += 8;
        data64++;
    }

    HAL_FLASH_Lock();
    return HAL_OK;
}

void Flash_ReadVars(FlashVars_t *vars)
{
    const FlashVars_t *flashPtr = (const FlashVars_t *)FLASH_USER_START_ADDR;
    *vars = *flashPtr;
}
