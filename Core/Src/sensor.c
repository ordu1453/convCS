#include "sensor.h"
#include "config.h"


static SensorValues_t currentValues;

extern ADC_HandleTypeDef hadc1;



void sensorInit(void)
{
HAL_ADC_Start(&hadc1);
}


void sensorRead(void)
{
uint32_t rawValues[5];


for (uint8_t i = 0; i < 5; i++)
{
ADC_ChannelConfTypeDef sConfig = {0};
sConfig.Channel = ADC_CHANNEL_0 + i;
sConfig.Rank = ADC_REGULAR_RANK_1;
sConfig.SamplingTime = ADC_SAMPLETIME_247CYCLES_5;
HAL_ADC_ConfigChannel(&hadc1, &sConfig);


HAL_ADC_Start(&hadc1);
HAL_ADC_PollForConversion(&hadc1, 10);
rawValues[i] = HAL_ADC_GetValue(&hadc1);
HAL_ADC_Stop(&hadc1);
}


// Преобразование ADC -> реальные значения
currentValues.currentIn    = (float)rawValues[0] * ADC_TO_CURRENT_COEFF_IN;
currentValues.currentOut   = (float)rawValues[1] * ADC_TO_CURRENT_COEFF_OUT;
currentValues.currentChoke    = (float)rawValues[2] * ADC_TO_CURRENT_COEFF_CHOKE;
currentValues.voltageIn    = (float)rawValues[3] * ADC_TO_VOLTAGE_COEFF_IN;
currentValues.voltageOut   = (float)rawValues[4] * ADC_TO_VOLTAGE_COEFF_OUT;
}


const SensorValues_t* sensorGetValues(void)
{
return &currentValues;
}
