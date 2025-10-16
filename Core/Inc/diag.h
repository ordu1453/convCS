/*
 * diag.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_DIAG_H_
#define INC_DIAG_H_




#include <stdint.h>
#include "types.h"


void diagInit(void);
uint8_t diagCheck(const SensorValues_t* s, uint32_t* errorMask);


#endif /* INC_DIAG_H_ */
