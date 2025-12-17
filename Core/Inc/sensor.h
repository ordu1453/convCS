/*
 * sensor.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "main.h"
#include "types.h"


void sensorInit(void);
void sensorRead(void);
const SensorValues_t* sensorGetValues(void);
void SensorCalibration(void);


#endif /* INC_SENSOR_H_ */
