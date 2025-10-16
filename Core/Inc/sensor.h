/*
 * sensor.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "types.h"
#include <stdint.h>


void sensorInit(void);
void sensorStartADC(void);
void sensorPoll(void); // call from ADC conversion complete or periodically
const SensorValues_t* sensorGetValues(void);

#endif /* INC_SENSOR_H_ */
