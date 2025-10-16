/*
 * pwmHandler.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_PWMHANDLER_H_
#define INC_PWMHANDLER_H_




#include <stdint.h>
#include "config.h"


void pwmHandlerInit(void);
void pwmHandlerProcess(uint32_t errorMask);



#endif /* INC_PWMHANDLER_H_ */
