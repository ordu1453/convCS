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
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
}
void tearDown(void)
{ }

void test_converterProcess_Charge_ShouldRunPID(void)
{
 printf("===TESTING SYS PROCESS 1===\n");
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x00;
    unitTestHasError = 0;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x00)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_CHARGE)), (UNITY_INT)(UNITY_UINT32)((currentState)), (
   ((void *)0)
   ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_ENABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldntRunPID1(void)
{
 printf("===TESTING SYS PROCESS 2===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x01;
    unitTestHasError = 1;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x01)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldntRunPID2(void)
{
 printf("===TESTING SYS PROCESS 3===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x02;
    unitTestHasError = 1;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x02)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldntRunPID3(void)
{
 printf("===TESTING SYS PROCESS 4===\n");
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x08;
    unitTestHasError = 1;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x08)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(114), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldntRunPID4(void)
{
 printf("===TESTING SYS PROCESS 5===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x04;
    unitTestHasError = 1;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0x04)), (UNITY_INT)(UNITY_UINT32)((globalErrorMask)), (
   ((void *)0)
   ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Charge_ShouldGoInit(void)
{
 printf("===TESTING SYS PROCESS 6===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x01;
    unitTestHasError = 1;

    converterProcess(STATE_CHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_INIT)), (UNITY_INT)(UNITY_UINT32)((currentState)), (
   ((void *)0)
   ), (UNITY_UINT)(147), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Disharge_ShouldGoInit(void)
{
 printf("===TESTING SYS PROCESS 6===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x01;
    unitTestHasError = 1;

    converterProcess(STATE_DISCHARGE);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_INIT)), (UNITY_INT)(UNITY_UINT32)((currentState)), (
   ((void *)0)
   ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_UINT32);
}
void test_converterProcess_Precharge_ShouldGoInit(void)
{
 printf("===TESTING SYS PROCESS 7===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x01;
    unitTestHasError = 1;

    SystemState_t state = STATE_PRECHARGE;
    converterProcess(state);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_INIT)), (UNITY_INT)(UNITY_UINT32)((currentState)), (
   ((void *)0)
   ), (UNITY_UINT)(179), UNITY_DISPLAY_STYLE_UINT32);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_DISABLE)), (UNITY_INT)(UNITY_UINT32)((currentPWMState)), (
   ((void *)0)
   ), (UNITY_UINT)(180), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_Precharge_ShouldGoIdle(void)
{
 printf("===TESTING SYS PROCESS 8===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = 0x00;
    unitTestHasError = 0;

    SystemState_t state = STATE_PRECHARGE;
    converterProcess(state);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((unitTestHasError)), (
   ((void *)0)
   ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_UINT8);
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_IDLE)), (UNITY_INT)(UNITY_UINT32)((currentState)), (
   ((void *)0)
   ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_UINT32);
}

void test_converterProcess_ConverterGetState(void)
{
 printf("===TESTING SYS PROCESS 8===\n");

    unitTestSensorValues.voltageOut = 5000.0f;
    unitTestErrorMask = 0x04;
    unitTestHasError = 1;

    SystemState_t state = STATE_PRECHARGE;
    converterProcess(state);
     SystemState_t newState = ConverterGetState();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((STATE_INIT)), (UNITY_INT)(UNITY_UINT32)((newState)), (
   ((void *)0)
   ), (UNITY_UINT)(216), UNITY_DISPLAY_STYLE_UINT32);
}