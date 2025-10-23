
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



void test_diagCheck_NoErrors_ShouldReturnZero(void) {
    uint32_t errorMask;
    uint8_t result = diagCheck(&sensor, &errorMask);

    TEST_ASSERT_EQUAL_UINT8(0, result);
    TEST_ASSERT_EQUAL_UINT32(ERR_NONE, errorMask);
}



#endif // TEST
