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

void test_Precharge_Init(void)
{
 SystemState_t state = STATE_INIT;
 uint8_t hasError = 0;
 currentPWMState = STATE_ENABLE;

 pwmHandlerProcess(hasError, state);

 UnityAssertEqualNumber((UNITY_INT)((STATE_DISABLE)), (UNITY_INT)((currentPWMState)), (
((void *)0)
), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);
 UnityAssertEqualNumber((UNITY_INT)((STATE_INIT)), (UNITY_INT)((currentState)), (
((void *)0)
), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);
}

void test_Precharge_DischargeWithNoError(void)
{
 SystemState_t state = STATE_DISCHARGE;
 uint8_t hasError = 0;
 currentPWMState = STATE_DISABLE;

 pwmHandlerProcess(hasError, state);

 UnityAssertEqualNumber((UNITY_INT)((STATE_ENABLE)), (UNITY_INT)((currentPWMState)), (
((void *)0)
), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);
 UnityAssertEqualNumber((UNITY_INT)((STATE_DISCHARGE)), (UNITY_INT)((currentState)), (
((void *)0)
), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT);
}