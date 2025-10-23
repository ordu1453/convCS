// CEEDLING NOTICE: This generated file only to be consumed for test runner creation

#include "build/vendor/unity/src/unity.h"
#include "Core/Inc/precharge.h"
#include "Core/Inc/pid.h"
#include "Core/Inc/diag.h"
#include "Core/Inc/config.h"
#include "Core/Inc/converter.h"
#include "Core/Inc/pwmHandler.h"
#include "Core/Inc/pwm.h"
#include "Core/Inc/sensor.h"
#include "mock_stm32g4xx_hal.h"

PIController_t pi;
PI2Controller_t pi2;
SensorValues_t sensor;

extern SensorValues_t unitTestSensorValues;
extern uint32_t unitTestErrorMask;
extern uint8_t unitTestHasError;

extern uint32_t globalErrorMask;
extern SystemState_t currentState;
extern PWMState_t currentPWMState;

extern uint32_t rawValues[5];
extern SensorValues_t currentValues;

void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{}
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void test_sensor_ConvertationToRealValues1(void)
{
 printf("===TESTING SENSOR Convertation 1===\n");

 rawValues[0] = 4095;
 rawValues[1] = 4095;
 rawValues[2] = 4095;
 rawValues[3] = 4095;
 rawValues[4] = 4095;

 sensorRead();

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1799.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1799.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(50)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1799.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1799.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentChoke))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(51)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1799.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1799.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(52)));

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1920.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1920.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(54)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1920.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1920.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(55)));
}

void test_sensor_ConvertationToRealValues2(void)
{
 printf("===TESTING SENSOR Convertation 2===\n");

 rawValues[0] = 0;
 rawValues[1] = 0;
 rawValues[2] = 0;
 rawValues[3] = 0;
 rawValues[4] = 0;

 sensorRead();

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(71)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentChoke))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(72)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((-1500.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(73)));

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((-1600.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((-1600.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(75)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((-1600.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((-1600.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(76)));
}

void test_sensor_ConvertationToRealValues3(void)
{
 printf("===TESTING SENSOR Convertation 3===\n");

 rawValues[0] = 1861;
 rawValues[1] = 1861;
 rawValues[2] = 1861;
 rawValues[3] = 1861;
 rawValues[4] = 1861;

 sensorRead();

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(92)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentChoke))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(93)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.currentOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(94)));

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageIn))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(96)));
 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((currentValues.voltageOut))), ((
((void *)0)
)), (UNITY_UINT)((UNITY_UINT)(97)));
}