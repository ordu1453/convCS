
#ifdef TEST_UNITY

#include "unity.h"
#include "precharge.h"
#include "pid.h"
//#include "types.h"
#include "mock_stm32g4xx_hal.h"
#include "diag.h"
#include "config.h"
#include "converter.h"
#include "pwmHandler.h"
//#include "sensor.h"

PIController_t pi;
PI2Controller_t pi2;
SensorValues_t sensor;


extern SensorValues_t unitTestSensorValues;
extern uint32_t unitTestErrorMask;
extern uint8_t unitTestHasError;


extern uint32_t globalErrorMask;
extern SystemState_t currentState;

//void HAL_Delay(uint32_t ms) {}
void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState) {}
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);


// переменная из precharge.c
extern uint8_t prechargeDone;

void setUp(void) {
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
}
void tearDown(void) { }

void test_prechargeInit_setsPrechargeDoneToZero(void) {
    prechargeInit();
    TEST_ASSERT_EQUAL_UINT8(0, prechargeDone);
}

void test_piInit_ShouldInitializeValues(void)
{
    piInit(&pi, 2.0f, 0.5f, 0.01f, 0, 100);

    TEST_ASSERT_EQUAL_FLOAT(2.0f, pi.kp);
    TEST_ASSERT_EQUAL_FLOAT(0.5f, pi.ki);
    TEST_ASSERT_EQUAL_FLOAT(0.01f, pi.dt);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi.integral);
    TEST_ASSERT_EQUAL_UINT(0u, pi.output);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi.outMin);
    TEST_ASSERT_EQUAL_FLOAT(100.0f, pi.outMax);
}

void test_piUpdate_ShouldReturnCorrectOutput(void)
{
    piInit(&pi, 2.0f, 1.0f, 0.1f, 0, 100);

    unsigned int out = piUpdate(&pi, 10.0f, 8.0f);
    float expected_integral = (10.0f - 8.0f) * pi.ki * pi.dt; // 2 * 1 * 0.1 = 0.2
    float expected_output = pi.kp * (10.0f - 8.0f) + expected_integral; // 2*2 + 0.2 = 4.2

    TEST_ASSERT_EQUAL_FLOAT(expected_integral, pi.integral);
    TEST_ASSERT_EQUAL_UINT((unsigned int)expected_output, out);
}

void test_piUpdate_ShouldClampIntegralAndOutput(void)
{
    piInit(&pi, 10.0f, 50.0f, 0.1f, 0, 10);

    // Ошибка очень большая => интеграл и выход будут ограничены
    unsigned int out = piUpdate(&pi, 100.0f, 0.0f);

    TEST_ASSERT_EQUAL_FLOAT(pi.outMax, pi.integral);
    TEST_ASSERT_EQUAL_UINT(pi.outMax, out);
}


void test_piReset_ShouldClearIntegralAndOutput(void)
{
    piInit(&pi, 2.0f, 1.0f, 0.1f, 0, 100);
    piUpdate(&pi, 10, 8);

    piReset(&pi);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi.integral);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi.output);
}

void test_pi2Init_ShouldInitializeBothLoops(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);

    TEST_ASSERT_EQUAL_FLOAT(2.0f, pi2.voltageLoop.kp);
    TEST_ASSERT_EQUAL_FLOAT(0.5f, pi2.voltageLoop.ki);
    TEST_ASSERT_EQUAL_FLOAT(0.01f, pi2.voltageLoop.dt);

    TEST_ASSERT_EQUAL_FLOAT(1.0f, pi2.currentLoop.kp);
    TEST_ASSERT_EQUAL_FLOAT(0.2f, pi2.currentLoop.ki);
}

void test_pi2Update_ShouldReturnDutyCycle(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);

    unsigned int duty = pi2Update(&pi2, 10.0f, 8.0f, 5.0f);

    // Проверим, что выход текущего контура не превышает лимиты
    TEST_ASSERT_TRUE(duty <= pi2.currentLoop.outMax);
    TEST_ASSERT_TRUE(duty >= pi2.currentLoop.outMin);
}

void test_pi2Reset_ShouldResetBothLoops(void)
{
    pi2Init(&pi2, 2.0f, 0.5f, 1.0f, 0.2f, 0.01f, 0, 50, 0, 100);
    pi2Update(&pi2, 10.0f, 8.0f, 5.0f);

    pi2Reset(&pi2);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi2.voltageLoop.integral);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi2.voltageLoop.output);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi2.currentLoop.integral);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, pi2.currentLoop.output);
}

void test_diagCheck_NoErrors_ShouldReturnZero(void) {
    uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);
}


void test_converterProcess_Charge_ShouldRunPID(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_NONE;
    unitTestHasError = 0;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_CHARGE, currentState);

}


void test_converterProcess_Charge_ShouldntRunPID1(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE, globalErrorMask);
}

void test_converterProcess_Charge_ShouldntRunPID2(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_UNDERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_UNDERVOLTAGE, globalErrorMask);
}

void test_converterProcess_Charge_ShouldntRunPID3(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_IGBT_DRIVER;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_IGBT_DRIVER, globalErrorMask);
}

void test_converterProcess_Charge_ShouldntRunPID4(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERCURRENT;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, globalErrorMask);
}

void test_converterProcess_Charge_ShouldGoInit(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(STATE_INIT, currentState);
}

void test_converterProcess_Precharge_ShouldGoInit(void)
{
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    SystemState_t state = STATE_PRECHARGE;
    converterProcess(state);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(STATE_INIT, currentState);
}

#endif // TEST
