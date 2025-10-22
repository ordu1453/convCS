/*
 * precharge.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_PRECHARGE_H_
#define INC_PRECHARGE_H_

#ifndef PRECHARGE_H
#define PRECHARGE_H


#include <stdint.h>


void prechargeInit(void);
void prechargeStart(void);

static uint8_t prechargeDone = 0;


#endif // PRECHARGE_H

#endif /* INC_PRECHARGE_H_ */
