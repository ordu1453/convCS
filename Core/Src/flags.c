/*
 * flags.c
 *
 *  Created on: Jan 27, 2025
 *      Author: aordu
 */


#include "flags.h"


static volatile uint8_t stepFlag = 0;
static volatile uint8_t handlerStepFlag = 0;
static volatile uint8_t modeFlag = 0;
static volatile uint8_t ledFlag = 0;



static volatile uint8_t errorCode = 0;

//TODO Unify setStepFlag functions in one function for readability

void SetStepFlag(void) {
    stepFlag = 1;
}


uint8_t GetStepFlag(void) {
    uint8_t buf_flag = stepFlag;
    stepFlag = 0;
    return buf_flag;
}


void SetModeFlag(uint8_t mode)
{
	modeFlag = mode;
}


uint8_t GetModeFlag(void)
{
    uint8_t buf_flag = modeFlag;
    return buf_flag;
}


void SetLedFlag(void)
{
    ledFlag = 1;
}


uint8_t GetLedFlag(void)
{
    uint8_t buf_flag = ledFlag;
    ledFlag = 0;
    return buf_flag;
}


void SetErrorCode(uint8_t Error)
{
	errorCode &= ~(1 << Error);
    errorCode |= (1 << Error);
}


uint8_t GetErrorCode(void)
{
    uint8_t buf_flag = errorCode;
    return buf_flag;
}


void SetHandlerStepFlag(void) {
	handlerStepFlag = 1;
}


uint8_t GetHandlerStepFlag(void) {
    uint8_t buf_flag = handlerStepFlag;
    handlerStepFlag = 0;
    return buf_flag;
}

