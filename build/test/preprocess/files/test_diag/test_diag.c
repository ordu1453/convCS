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

extern uint8_t prechargeDone;

void setUp(void)
{
}
void tearDown(void)
{ }

void test_diagCheck_NoErrors_ShouldReturnZero(void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_CurChoke (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 1900.0f +1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = -1900.0f -1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_CurOut (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 1900.0f +1;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = -1900.0f -1;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_Cur_In (void)
{
    sensor.currentIn = 1900.0f +1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(127), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(128), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = -1900.0f -1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(137), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(138), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_FirstErrors_ThenNoError (void)
{
    sensor.currentIn = 1900.0f +1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_FirstErrors_ThenNoError_ThenError (void)
{
    sensor.currentIn = 1900.0f +1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(178), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(179), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(188), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(189), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 1900.0f +1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_VolIn (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 1500.0f +1;
    sensor.voltageOut = 0;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(213), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(214), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0.0f -1;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(223), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x02)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(224), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_VolOut (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 1500.0f +1;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(238), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(239), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0.0f -1;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(248), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x02)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(249), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_VolAndCur (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 1900.0f +1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 1500.0f +1;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(262), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01 | 0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(263), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = -1900.0f -1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0.0f -1;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(272), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x02 | 0x04)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(273), UNITY_DISPLAY_STYLE_UINT32);
}

void test_diagCheck_Errors_All (void)
{
    sensor.currentIn = -1900.0f -1;
    sensor.currentOut = 1900.0f +1;
    sensor.currentChoke = 1900.0f +1;
    sensor.voltageIn = 0.0f -1;
    sensor.voltageOut = 1500.0f +1;
 uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01 | 0x04 | 0x02)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = -1900.0f -1;
    sensor.currentOut = -1900.0f -1;
    sensor.currentChoke = 1900.0f +1;
    sensor.voltageIn = 1500.0f +1;
    sensor.voltageOut = 0.0f -1;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((1)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(296), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01 | 0x04 | 0x02)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(297), UNITY_DISPLAY_STYLE_UINT32);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(306), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(307), UNITY_DISPLAY_STYLE_UINT32);
}