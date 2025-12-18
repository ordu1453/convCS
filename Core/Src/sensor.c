#include "sensor.h"
#include "config.h"
#include "flash.h"



#ifndef TEST_UNITY

extern ADC_HandleTypeDef hadc1;
static SensorValues_t currentValues;
extern UART_HandleTypeDef huart3;

// Переменные в FLASH
FlashVars_t varsFromFlash;
FlashVars_t vars;

void sensorInit(void)
{
	  Flash_ReadVars(&vars);
}


void sensorC(void)
{
//	uint32_t primask_bit = __get_PRIMASK();  // сохраняем состояние
	__disable_irq();
	SensorCalibration();
    // Вывод результатов
//    printf("vol1: %d\r\n", varsFromFlash.calVol1);
//    printf("vol2: %d\r\n", varsFromFlash.calVol2);
//    printf("cur1: %d\r\n", varsFromFlash.calCur1);
//    printf("cur2: %d\r\n", varsFromFlash.calCur2);
//    printf("cur3: %d\r\n", varsFromFlash.calCur3);
	__enable_irq();   // Включить прерывания (PRIMASK = 0)

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
//HAL_ADC_Stop(&hadc1);
}

#endif

currentValues.voltageIn    = -((float)rawValues[0] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET;
printf("voltage before: %lu\r\n", currentValues.voltageIn);
printf("vol1: %d\r\n", vars.calVol1);

float temp;

// Преобразование ADC -> реальные значения
currentValues.currentIn    = ((float)rawValues[2] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur1;
currentValues.currentOut   = ((float)rawValues[3] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur2;
currentValues.currentChoke = ((float)rawValues[4] * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET + vars.calCur3;

temp = -((float)rawValues[0] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET - vars.calVol1;
currentValues.voltageIn = (temp < 0) ? 0 : temp;
temp = -((float)rawValues[1] * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET - vars.calVol2;
currentValues.voltageOut = (temp < 0) ? 0 : temp;
//printf("\033[2J\033[H");
//
//printf("adc value: %lu\r\n", rawValues[0]);
////printf("adc value: %lu\r\n", rawValues[1]);
////printf("adc value: %lu\r\n", rawValues[2]);
////printf("adc value: %lu\r\n", rawValues[3]);
////printf("adc value: %lu\r\n", rawValues[4]);
//
printf("voltage: %lu\r\n", currentValues.voltageIn);

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
        current.currentIn    = ((float)raw2 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET;
        current.currentOut   = ((float)raw3 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET;
        current.currentChoke = ((float)raw4 * ADC_TO_CURRENT_COEFF) - CURRENT_OFFSET;
        current.voltageIn    = -((float)raw0 * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET;
        current.voltageOut   = -((float)raw1 * ADC_TO_VOLTAGE_COEFF) + VOLTAGE_OFFSET;

//        // Защита от отрицательных значений
//        current.voltageIn  = (current.voltageIn  < 0.0f) ? 0.0f : current.voltageIn;
//        current.voltageOut = (current.voltageOut < 0.0f) ? 0.0f : current.voltageOut;
//
        if(i >= CAL_OFFSET){
        // Накопление суммы
        sumValues.currentIn    += current.currentIn;
        sumValues.currentOut   += current.currentOut;
        sumValues.currentChoke += current.currentChoke;
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
           HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
           printf("Flash erase error: %d\r\n", status);
           return;
       }

       // Записываем в FLASH
       status = Flash_WriteVars(&varsFromFlash);
       if (status != HAL_OK)
       {
           HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
           printf("Flash write error: %d\r\n", status);
           return;
       }

       // Читаем обратно
       Flash_ReadVars(&vars);

       // Вывод результатов
//       printf("vol1: %d\r\n", vars.calVol1);
//       printf("vol2: %d\r\n", vars.calVol2);
//       printf("cur1: %d\r\n", vars.calCur1);
//       printf("cur2: %d\r\n", vars.calCur2);
//       printf("cur3: %d\r\n", vars.calCur3);
   #endif
   }
const SensorValues_t* sensorGetValues(void)
{
return &currentValues;
}




