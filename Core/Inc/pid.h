/*
 * pid.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_PID_H_
#define INC_PID_H_


#include <stdint.h>


typedef struct {
float kp;
float ki;
float kd;
float integrator;
float prevError;
float outputMin;
float outputMax;
} PID_t;


void pidInit(PID_t* pid, float kp, float ki, float kd, float outMin, float outMax);
float pidUpdate(PID_t* pid, float setpoint, float measurement, float dt);
void pidReset(PID_t* pid);



#endif /* INC_PID_H_ */
