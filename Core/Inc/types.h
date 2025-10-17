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
int32_t currentIn;
int32_t currentOut;
int32_t currentChoke;
int32_t voltageIn;
int32_t voltageOut;
} SensorValues_t;



#endif /* INC_TYPES_H_ */
