// flash.c
#include "flash.h"
#include <string.h>

HAL_StatusTypeDef Flash_Erase(void)
{
    FLASH_EraseInitTypeDef erase;
    uint32_t pageError = 0;

    // Убедитесь, что адрес корректен
    uint32_t pageAddress = FLASH_USER_START_ADDR;

    // Определяем номер страницы для STM32G4
    uint32_t sector = (pageAddress - FLASH_BASE) / FLASH_PAGE_SIZE;

    erase.TypeErase = FLASH_TYPEERASE_PAGES;
    erase.Banks = FLASH_BANK_1;
    erase.Page = sector;  // Для STM32G4 используем Page вместо NbPages
    erase.NbPages = 1;

    // ВАЖНО: Отключить прерывания перед операцией с FLASH
    __disable_irq();

    HAL_FLASH_Unlock();
    HAL_StatusTypeDef status = HAL_FLASHEx_Erase(&erase, &pageError);
    HAL_FLASH_Lock();

    __enable_irq();

    if (status != HAL_OK || pageError != 0xFFFFFFFF)
    {
        return HAL_ERROR;
    }

    return HAL_OK;
}

HAL_StatusTypeDef Flash_WriteVars(const FlashVars_t *vars)
{
    uint32_t address = FLASH_USER_START_ADDR;

    // Выравниваем данные на 8 байт
    uint64_t data[sizeof(FlashVars_t) / 8 + 1] = {0};
    memcpy(data, vars, sizeof(FlashVars_t));

    // Отключить прерывания
    __disable_irq();

    HAL_FLASH_Unlock();

    for (uint32_t i = 0; i < sizeof(data) / sizeof(uint64_t); i++)
    {
        if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD,
                              address + i * 8,
                              data[i]) != HAL_OK)
        {
            HAL_FLASH_Lock();
            __enable_irq();
            return HAL_ERROR;
        }
    }

    HAL_FLASH_Lock();
    __enable_irq();

    return HAL_OK;
}

void Flash_ReadVars(FlashVars_t *vars)
{
    const FlashVars_t *flashPtr = (const FlashVars_t *)FLASH_USER_START_ADDR;
    *vars = *flashPtr;
}
