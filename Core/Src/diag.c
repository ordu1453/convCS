/*
 * diag.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "diag.h"
#include "config.h"
#include "main.h"

#define DRIVER_FAULT_PIN_COUNT 4  // количество входов от IGBT-драйверов (один полумост)

static const uint16_t driverFaultPins[DRIVER_FAULT_PIN_COUNT] = {
    GPIO_PIN_4,
    GPIO_PIN_5,
    GPIO_PIN_6,
    GPIO_PIN_7,
};

#define DRIVER_FAULT_GPIOA GPIOA
#define DRIVER_FAULT_GPIOB GPIOB





uint8_t diagCheck(const SensorValues_t* sensorValues, uint32_t* errorMask)
{
    uint8_t hasError = 0;
    *errorMask = ERR_NONE;

    // --- Проверка токов ---
    if (sensorValues->currentIn > I_MAX ||
        sensorValues->currentIn < -I_MAX ||
        sensorValues->currentOut > I_MAX ||
        sensorValues->currentOut < -I_MAX ||
        sensorValues->currentChoke > I_MAX ||
        sensorValues->currentChoke < -I_MAX)
    {
        *errorMask |= ERR_OVERCURRENT;
        hasError = 1;
    }

    // --- Проверка напряжений ---
    if (sensorValues->voltageIn > VBUS_MAX ||
        sensorValues->voltageOut > VBUS_MAX )
    {
        *errorMask |= ERR_OVERVOLTAGE;
        hasError = 1;
    }

    // --- Проверка напряжений ---
    if (sensorValues->voltageIn < VBUS_MIN ||
        sensorValues->voltageOut < VBUS_MIN)
    {
        *errorMask |= ERR_UNDERVOLTAGE;
        hasError = 1;
    }

#ifndef TEST_UNITY

    // --- Проверка ошибок от IGBT-драйверов ---
    for (uint8_t i = 0; i < DRIVER_FAULT_PIN_COUNT; i++) {
        if (HAL_GPIO_ReadPin(DRIVER_FAULT_GPIOA, driverFaultPins[i]) == GPIO_PIN_SET) {
            *errorMask |= ERR_IGBT_DRIVER;
            hasError = 1;
            break; // можно выйти сразу при первой ошибке
        }
    }

    for (uint8_t i = 0; i < DRIVER_FAULT_PIN_COUNT; i++) {
        if (HAL_GPIO_ReadPin(DRIVER_FAULT_GPIOB, driverFaultPins[i]) == GPIO_PIN_SET) {
            *errorMask |= ERR_IGBT_DRIVER;
            hasError = 1;
            break; // можно выйти сразу при первой ошибке
        }
    }

#endif


    return hasError;
}
