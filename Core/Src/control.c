/*
 * control.c
 *
 *  Created on: Oct 14, 2025
 *      Author: ordum
 */

#include "main.h"
#include <stdint.h>

extern TIM_HandleTypeDef htim1;
extern ADC_HandleTypeDef hadc1; // Используется ADC1, инициализированный в CubeMX

// -------------------- System States --------------------
#define STATE_IDLE       0
#define STATE_PRECHARGE  1
#define STATE_INIT       2
#define STATE_CHARGE     3
#define STATE_DISCHARGE  4

#define PWM_ENABLED      1
#define PWM_DISABLED     0

#define MAX_CURRENT 5000.0
#define MAX_PWM 30000
#define DT 0.00001

// -------------------- System --------------------
typedef struct {
    uint8_t state;
    uint8_t pwmState;
    uint32_t pwmValue;
} System;

System system = {STATE_INIT, PWM_DISABLED, 0};

// ------------------ ADC -------------------------

uint32_t adc_values[5]; // массив для хранения значений

void Read_ADC_Channels(void)
{
    ADC_ChannelConfTypeDef sConfig = {0};

    // Каналы 1, 2, 3, 4 (замени на свои)
    uint32_t channels[5] = {ADC_CHANNEL_1, ADC_CHANNEL_2, ADC_CHANNEL_3, ADC_CHANNEL_4, ADC_CHANNEL_5};

    for (int i = 0; i < 5; i++)
    {
        sConfig.Channel = channels[i];
        sConfig.Rank = ADC_REGULAR_RANK_1;
        sConfig.SamplingTime = ADC_SAMPLETIME_12CYCLES_5; // можно изменить

        HAL_ADC_ConfigChannel(&hadc1, &sConfig);

        HAL_ADC_Start(&hadc1);              // запуск преобразования
        HAL_ADC_PollForConversion(&hadc1, 10); // ждём завершения
        adc_values[i] = HAL_ADC_GetValue(&hadc1); // читаем результат
        HAL_ADC_Stop(&hadc1);
    }
}


// -------------------- Sensors --------------------
int16_t getVoltageIn() { int16_t vol = adc_values[1]*1201; return vol; }  // TODO: add voltage and current calculation
uint8_t getVoltageOut() { return 0; }
uint8_t getCurrentIn() { return 0; }
uint8_t getCurrentOut() { return 0; }
uint8_t getInductorCurrent() { return 0; }

// -------------------- PI Regulator --------------------
typedef struct {
    double vKp, vKi;
    double cKp, cKi;
    double vIntegral, cIntegral;
} Regulator;

Regulator regulator = {1.5, 40.0, 3.0, 100.0, 0.0, 0.0};

// -------------------- Clamp --------------------
double clamp(double val, double min, double max) {
    if(val < min) return min;
    if(val > max) return max;
    return val;
}

// -------------------- Update PWM --------------------
unsigned int updatePWM(Regulator* r, int targetVoltage, int voltage, int current) {
    double targetCurrent;
    double errorV = targetVoltage - voltage;
    r->vIntegral += errorV * DT;
    if (r->vIntegral < 0) r->vIntegral = 0;
    if (r->vIntegral > MAX_CURRENT / r->vKi) r->vIntegral = MAX_CURRENT / r->vKi;

    targetCurrent = r->vKp * errorV + r->vKi * r->vIntegral;
    if (targetCurrent < 0) targetCurrent = 0;
    if (targetCurrent > MAX_CURRENT) targetCurrent = MAX_CURRENT;

    double errorC = targetCurrent - current;
    r->cIntegral += errorC * DT;
    if (r->cIntegral < 0) r->cIntegral = 0;
    if (r->cIntegral > MAX_PWM / r->cKi) r->cIntegral = MAX_PWM / r->cKi;

    double pwmOutput = r->cKp * errorC + r->cKi * r->cIntegral;
    if (pwmOutput < 0) pwmOutput = 0;
    if (pwmOutput > MAX_PWM) pwmOutput = MAX_PWM;

    return (unsigned int)pwmOutput;
}

// -------------------- Main Function --------------------
void main_func() {

    int voltage, current, inductorCurrent;
    int targetVoltage = 0;  // TODO: replace with actual target

    if(system.state == STATE_DISCHARGE) {
        voltage = getVoltageOut();
        current = getCurrentOut();
        inductorCurrent = getInductorCurrent();
        unsigned int pwm = updatePWM(&regulator, targetVoltage, voltage, inductorCurrent);
    } else if(system.state == STATE_CHARGE) {
        voltage = getVoltageIn();
        current = getCurrentIn();
        inductorCurrent = getInductorCurrent();
        unsigned int pwm = updatePWM(&regulator, targetVoltage, voltage, inductorCurrent);
    } else {
        voltage = 0;
        current = 0;
    }

    inductorCurrent = getInductorCurrent();
    unsigned int pwm = updatePWM(&regulator, targetVoltage, voltage, inductorCurrent);

    // Update PWM value
    system.pwmValue = pwm;
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, pwm);
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, pwm);
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_4, pwm/2);
}

// -------------------- PWM Start/Stop --------------------
void PWMStart() { system.pwmState = PWM_ENABLED;
HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_1);
}
void PWMStop()  { system.pwmState = PWM_DISABLED;
HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);
}


