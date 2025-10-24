
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
}
void tearDown(void) { }



void test_diagCheck_NoErrors_ShouldReturnZero(void) {

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);
}


void test_diagCheck_Errors_CurChoke (void)
{

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = I_MAX+1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);


    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = -I_MAX-1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);
}


void test_diagCheck_Errors_CurOut (void)
{

    sensor.currentIn = 0;
    sensor.currentOut = I_MAX+1;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = -I_MAX-1;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);
}


void test_diagCheck_Errors_Cur_In (void)
{

    sensor.currentIn = I_MAX+1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);

    sensor.currentIn = -I_MAX-1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);
}


void test_diagCheck_FirstErrors_ThenNoError (void)
{

    sensor.currentIn = I_MAX+1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);
}

void test_diagCheck_FirstErrors_ThenNoError_ThenError (void)
{

    sensor.currentIn = I_MAX+1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = I_MAX+1;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERCURRENT, errorMask);
}

void test_diagCheck_Errors_VolIn (void)
{

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = VBUS_MAX+1;
    sensor.voltageOut = 0;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = VBUS_MIN-1;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_UNDERVOLTAGE, errorMask);
}


void test_diagCheck_Errors_VolOut (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = VBUS_MAX+1;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = VBUS_MIN-1;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_UNDERVOLTAGE, errorMask);
}

void test_diagCheck_Errors_VolAndCur (void)
{
    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = I_MAX+1;
    sensor.voltageIn = 0;
    sensor.voltageOut = VBUS_MAX+1;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE | ERR_OVERCURRENT, errorMask);

    sensor.currentIn = -I_MAX-1;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = VBUS_MIN-1;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_UNDERVOLTAGE | ERR_OVERCURRENT, errorMask);
}

void test_diagCheck_Errors_All (void)
{
    sensor.currentIn = -I_MAX-1;
    sensor.currentOut = I_MAX+1;
    sensor.currentChoke = I_MAX+1;
    sensor.voltageIn = VBUS_MIN-1;
    sensor.voltageOut = VBUS_MAX+1;
	uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE | ERR_OVERCURRENT | ERR_UNDERVOLTAGE, errorMask);

    sensor.currentIn = -I_MAX-1;
    sensor.currentOut = -I_MAX-1;
    sensor.currentChoke = I_MAX+1;
    sensor.voltageIn = VBUS_MAX+1;
    sensor.voltageOut = VBUS_MIN-1;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(1, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_OVERVOLTAGE | ERR_OVERCURRENT | ERR_UNDERVOLTAGE, errorMask);

    sensor.currentIn = 0;
    sensor.currentOut = 0;
    sensor.currentChoke = 0;
    sensor.voltageIn = 0;
    sensor.voltageOut = 0;
    result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);
}

#endif // TEST
