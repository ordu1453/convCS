// CEEDLING NOTICE: This generated file only to be consumed for test runner creation

#include "build/vendor/unity/src/unity.h"
#include "Core/Inc/precharge.h"
#include "Core/Inc/pid.h"
#include "Core/Inc/diag.h"
#include "Core/Inc/config.h"
#include "Core/Inc/converter.h"
#include "mock_stm32g4xx_hal.h"

PIController_t pi;
PI2Controller_t pi2;
SensorValues_t sensor;

extern SensorValues_t unitTestSensorValues;
extern uint32_t unitTestErrorMask;
extern uint8_t unitTestHasError;

extern uint32_t globalErrorMask;
extern SystemState_t currentState;

void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{}
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

extern uint8_t prechargeDone;

void setUp(void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
}
void tearDown(void)
{ }

void test_prechargeInit_setsPrechargeDoneToZero(void)
{
    prechargeInit();
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((prechargeDone)), (
   ((void *)0)
   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_UINT8);
}

void test_piInit_ShouldInitializeValues(void)
{
    piInit(&pi, 2.0f, 0.5f, 0.01f, 0, 100);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((2.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((2.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.kp))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(54)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.5f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.5f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.ki))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(55)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.01f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.01f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.dt))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(56)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(57)));
    UnityAssertEqualNumber((UNITY_INT)((0u)), (UNITY_INT)((pi.output)), (
   ((void *)0)
   ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_UINT);
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.outMin))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(59)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((100.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((100.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.outMax))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(60)));
}

void test_piUpdate_ShouldReturnCorrectOutput(void)
{
    piInit(&pi, 2.0f, 1.0f, 0.1f, 0, 100);

    unsigned int out = piUpdate(&pi, 10.0f, 8.0f);
    float expected_integral = (10.0f - 8.0f) * pi.ki * pi.dt;
    float expected_output = pi.kp * (10.0f - 8.0f) + expected_integral;

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((expected_integral)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((expected_integral))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(71)));
    UnityAssertEqualNumber((UNITY_INT)(((unsigned int)expected_output)), (UNITY_INT)((out)), (
   ((void *)0)
   ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_UINT);
}

void test_piUpdate_ShouldClampIntegralAndOutput(void)
{
    piInit(&pi, 10.0f, 50.0f, 0.1f, 0, 10);

    unsigned int out = piUpdate(&pi, 100.0f, 0.0f);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((pi.outMax)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((pi.outMax))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(82)));
    UnityAssertEqualNumber((UNITY_INT)((pi.outMax)), (UNITY_INT)((out)), (
   ((void *)0)
   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_UINT);
}

void test_piReset_ShouldClearIntegralAndOutput(void)
{
    piInit(&pi, 2.0f, 1.0f, 0.1f, 0, 100);
    piUpdate(&pi, 10, 8);

    piReset(&pi);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(94)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi.output))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(95)));
}

void test_pi2Init_ShouldInitializeBothLoops(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((2.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((2.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.voltageLoop.kp))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(102)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.5f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.5f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.voltageLoop.ki))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(103)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.01f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.01f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.voltageLoop.dt))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(104)));

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((1.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((1.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.currentLoop.kp))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(106)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.2f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.2f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.currentLoop.ki))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(107)));
}

void test_pi2Update_ShouldReturnDutyCycle(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);

    unsigned int duty = pi2Update(&pi2, 10.0f, 8.0f, 5.0f);

    do { if ((duty <= pi2.currentLoop.outMax))
{ } else { UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((117))); } } while (0);
    do { if ((duty >= pi2.currentLoop.outMin))
{ } else { UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((118))); } } while (0);
}

void test_pi2Reset_ShouldResetBothLoops(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);
    pi2Update(&pi2, 10.0f, 8.0f, 5.0f);

    pi2Reset(&pi2);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.voltageLoop.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(128)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.voltageLoop.output))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(129)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.currentLoop.integral))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(130)));
    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((pi2.currentLoop.output))), ((
   ((void *)0)
   )), (UNITY_UINT)((UNITY_UINT)(131)));
}

void test_diagCheck_NoErrors_ShouldReturnZero(void)
{
    uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((result)), (
   ((void *)0)
   ), (UNITY_UINT)(138), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((errorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(139), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldRunPID(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x00;
    unitTestHasError = 0;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_UINT32);
}