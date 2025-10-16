/*
 * types.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_TYPES_H_
#define INC_TYPES_H_


#include <stdint.h>


typedef struct {
int32_t currentInput_mA;
int32_t currentOutput_mA;
int32_t currentChoke_mA;
int32_t voltageIn_mV;
int32_t voltageOut_mV;
} SensorValues_t;



#endif /* INC_TYPES_H_ */
