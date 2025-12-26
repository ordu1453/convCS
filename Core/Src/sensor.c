#include "sensor.h"
#include "config.h"
#include "flash.h"
#include "kalmanFilter.h"
#include <stdlib.h>    // для abs(int)
#include <stdint.h>


// Объявляем фильтры для каждого канала
KalmanFilter voltageIn_filter;
KalmanFilter voltageOut_filter;
KalmanFilter currentIn_filter;
KalmanFilter currentOut_filter;
KalmanFilter currentChoke_filter;

// Фильтры для калибровки датчиков
KalmanFilter voltageIn_filter0;
KalmanFilter voltageOut_filter0;
KalmanFilter currentIn_filter0;
KalmanFilter currentOut_filter0;
KalmanFilter currentChoke_filter0;

#ifndef TEST_UNITY

extern ADC_HandleTypeDef hadc1;
static SensorValues_t currentValues;
extern UART_HandleTypeDef huart3;

// Переменные в FLASH
FlashVars_t varsFromFlash;
FlashVars_t vars;

void initKalmanFilters(void) {
    // Параметры:
    // q - шум процесса (чем больше, тем быстрее реакция на изменения)
    // r - шум измерений (чем больше, тем больше сглаживание)
    // initial_value - начальное значение
    // initial_error - начальная ошибка

    kalmanInit(&voltageIn_filter,0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&voltageOut_filter, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentIn_filter, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentOut_filter, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentChoke_filter, 0.001f, 2.0f, 0.0f, 1.0f);

    kalmanInit(&voltageIn_filter0,0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&voltageOut_filter0, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentIn_filter0, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentOut_filter0, 0.001f, 2.0f, 0.0f, 1.0f);
    kalmanInit(&currentChoke_filter0, 0.001f, 2.0f, 0.0f, 1.0f);
}

void sensorInit(void)
{
	  Flash_ReadVars(&vars);
	  initKalmanFilters();
}

void sensorCalculateCoeff(void)
{
	__disable_irq();
	SensorCalibration();
	__enable_irq();
}

#else

uint32_t rawValues[5];
SensorValues_t currentValues;

#endif


void sensorRead(void)
{

#ifndef TEST_UNITY

uint32_t rawValues[5];

for (uint8_t i = 0; i < 5; i++)
{
HAL_ADC_Start(&hadc1);
HAL_ADC_PollForConversion(&hadc1, 10);
rawValues[i] = HAL_ADC_GetValue(&hadc1);
}

#endif

currentValues.voltageIn    = -((float)rawValues[0] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET;
float temp;

// Преобразование ADC -> реальные значения
currentValues.currentIn    = kalmanFilter(&currentIn_filter,(rawValues[2] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur1);
currentValues.currentOut   = kalmanFilter(&currentOut_filter, (rawValues[3] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur2);
currentValues.currentChoke = kalmanFilter(&currentChoke_filter, (rawValues[4] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur3);

temp = -((float)rawValues[0] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET - vars.calVol1;
temp = (temp < 0) ? 0 : temp;
currentValues.voltageIn = kalmanFilter(&voltageIn_filter, temp);

temp = -((float)rawValues[1] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET - vars.calVol2;
temp = (temp < 0) ? 0 : temp;
currentValues.voltageOut = kalmanFilter(&voltageOut_filter, temp);

//printf("\033[2J\033[H");

}

void SensorCalibration(void)
{
#ifndef TEST_UNITY

    #define ADC_SAMPLES 1000
#define CAL_OFFSET 0

    // Структура для накопления суммы значений
	SensorValues_t sumValues = {0};

    for (uint16_t i = 0; i < ADC_SAMPLES; i++)
    {
        HAL_ADC_Start(&hadc1);
        HAL_ADC_PollForConversion(&hadc1, 10);
        uint32_t raw0 = HAL_ADC_GetValue(&hadc1);

        HAL_ADC_Start(&hadc1);
        HAL_ADC_PollForConversion(&hadc1, 10);
        uint32_t raw1 = HAL_ADC_GetValue(&hadc1);

        HAL_ADC_Start(&hadc1);
        HAL_ADC_PollForConversion(&hadc1, 10);
        uint32_t raw2 = HAL_ADC_GetValue(&hadc1);

        HAL_ADC_Start(&hadc1);
        HAL_ADC_PollForConversion(&hadc1, 10);
        uint32_t raw3 = HAL_ADC_GetValue(&hadc1);

        HAL_ADC_Start(&hadc1);
        HAL_ADC_PollForConversion(&hadc1, 10);
        uint32_t raw4 = HAL_ADC_GetValue(&hadc1);

        // Преобразуем в реальные значения
        SensorValues_t current;
        current.currentIn    = kalmanFilter(&currentIn_filter0, ((float)raw2 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET);
        current.currentOut   = kalmanFilter(&currentOut_filter0, ((float)raw3 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET);
        current.currentChoke = kalmanFilter(&currentChoke_filter0, ((float)raw4 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET);
        current.voltageIn    = kalmanFilter(&voltageIn_filter0,-((float)raw0 * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET);
        current.voltageOut   = kalmanFilter(&voltageOut_filter0,-((float)raw1 * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET);

//        // Защита от отрицательных значений
//        current.voltageIn  = (current.voltageIn  < 0.0f) ? 0.0f : current.voltageIn;
//        current.voltageOut = (current.voltageOut < 0.0f) ? 0.0f : current.voltageOut;

        if(i >= CAL_OFFSET){
        // Накопление суммы
        sumValues.currentIn    += abs(current.currentIn);
        sumValues.currentOut   += abs(current.currentOut);
        sumValues.currentChoke += abs(current.currentChoke);
        sumValues.voltageIn    += current.voltageIn;
        sumValues.voltageOut   += current.voltageOut;
        }

    }

    // Вычисляем среднее
    sumValues.currentIn    /= ADC_SAMPLES - CAL_OFFSET;
    sumValues.currentOut   /= ADC_SAMPLES- CAL_OFFSET;
    sumValues.currentChoke /= ADC_SAMPLES- CAL_OFFSET;
    sumValues.voltageIn    /= ADC_SAMPLES- CAL_OFFSET;
    sumValues.voltageOut   /= ADC_SAMPLES- CAL_OFFSET;

    // Заполняем структуру для FLASH
    varsFromFlash.calCur1 = sumValues.currentIn;
    varsFromFlash.calCur2 = sumValues.currentOut;
    varsFromFlash.calCur3 = sumValues.currentChoke;
    varsFromFlash.calVol1 = sumValues.voltageIn;
    varsFromFlash.calVol2 = sumValues.voltageOut;
    varsFromFlash.calPerf = 0;


    HAL_StatusTypeDef status = Flash_Erase();
       if (status != HAL_OK)
       {
           HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
#ifdef DEBUG
           printf("Flash erase error: %d\r\n", status);
#endif
           return;

       }

       // Записываем в FLASH
       status = Flash_WriteVars(&varsFromFlash);
       if (status != HAL_OK)
       {
           HAL_GPIO_WritePin(LED1_GPIO_Port, LED2_Pin, SET);
#ifdef DEBUG
           printf("Flash write error: %d\r\n", status);
#endif
           return;
       }

       Flash_ReadVars(&vars);
   #endif
   }
const SensorValues_t* sensorGetValues(void)
{
return &currentValues;
}




