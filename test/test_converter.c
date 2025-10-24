
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
#include "pwm.h"
#include "sensor.h"

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




void test_converterProcess_Charge_ShouldRunPID(void)
{
	printf("===TESTING SYS PROCESS 1===\n");
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_NONE;
    unitTestHasError = 0;

    converterProcess(STATE_CHARGE);

    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_CHARGE, currentState);
    TEST_ASSERT_EQUAL_UINT32(STATE_ENABLE, currentPWMState);


}


void test_converterProcess_Charge_ShouldntRunPID1(void)
{
	printf("===TESTING SYS PROCESS 2===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);

}

void test_converterProcess_Charge_ShouldntRunPID2(void)
{
	printf("===TESTING SYS PROCESS 3===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_UNDERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_UNDERVOLTAGE, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);

}

void test_converterProcess_Charge_ShouldntRunPID3(void)
{
	printf("===TESTING SYS PROCESS 4===\n");
    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_IGBT_DRIVER;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_IGBT_DRIVER, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);

}

void test_converterProcess_Charge_ShouldntRunPID4(void)
{
	printf("===TESTING SYS PROCESS 5===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERCURRENT;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, globalErrorMask);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);

}

void test_converterProcess_Charge_ShouldGoInit(void)
{
	printf("===TESTING SYS PROCESS 6===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    converterProcess(STATE_CHARGE);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(STATE_INIT, currentState);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);
}

void test_converterProcess_Precharge_ShouldGoInit(void)
{
	printf("===TESTING SYS PROCESS 7===\n");

    unitTestSensorValues.voltageOut = 500.0f;
    unitTestErrorMask = ERR_OVERVOLTAGE;
    unitTestHasError = 1;

    // Вызываем функцию
    SystemState_t state = STATE_PRECHARGE;
    converterProcess(state);

    // Проверяем логику (например, currentState, globalErrorMask)
    TEST_ASSERT_EQUAL_UINT32(STATE_INIT, currentState);
    TEST_ASSERT_EQUAL_UINT32(STATE_DISABLE, currentPWMState);
}


#endif // TEST
