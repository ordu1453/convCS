/*
 * flags.h
 *
 *  Created on: Jan 27, 2025
 *      Author: aordu
 */

#ifndef INC_FLAGS_H_
#define INC_FLAGS_H_


#include <stdint.h>


void SetStepFlag(void);
uint8_t GetStepFlag(void);

void SetHandlerStepFlag(void);
uint8_t GetHandlerStepFlag(void);

void SetModeFlag(uint8_t mode);
uint8_t GetModeFlag(void);

void SetLedFlag(void);
uint8_t GetLedFlag(void);

void SetErrorCode(uint8_t Error);
void ResetErrorCode(void);
uint8_t GetErrorCode(void);

void SetDebugStepFlag(void);
uint8_t GetDebugStepFlag(void);

void SetPWMFlag(void);
void ResetPWMFlag(void);
uint8_t GetPWMFlag(void);

#endif /* INC_FLAGS_H_ */
