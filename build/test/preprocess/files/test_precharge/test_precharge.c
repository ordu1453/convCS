// CEEDLING NOTICE: This generated file only to be consumed for test runner creation

#include "build/vendor/unity/src/unity.h"
#include "Core/Inc/precharge.h"
#include "mock_stm32g4xx_hal.h"

void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{
    printf("HAL_GPIO_WritePin called: GPIOx=%p, Pin=%u, State=%s\n",
           (void*)GPIOx,
           GPIO_Pin,
           (PinState == GPIO_PIN_SET) ? "SET" : "RESET");
}

extern uint8_t prechargeDone;

void setUp(void)
{ }
void tearDown(void)
{ }

void test_prechargeInit_setsPrechargeDoneToZero(void)
{
    prechargeInit();
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((prechargeDone)), (
   ((void *)0)
   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_UINT8);
}