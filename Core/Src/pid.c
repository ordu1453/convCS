/*
 * pid.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pid.h"


void pidInit(PID_t* pid, float kp, float ki, float kd, float outMin, float outMax)
{
pid->kp=kp; pid->ki=ki; pid->kd=kd;
pid->integrator=0.0f; pid->prevError=0.0f;
pid->outputMin=outMin; pid->outputMax=outMax;
}


float pidUpdate(PID_t* pid, float setpoint, float measurement, float dt)
{
float error = setpoint - measurement;
pid->integrator += error * dt;
float derivative = (error - pid->prevError)/dt;
float out = pid->kp*error + pid->ki*pid->integrator + pid->kd*derivative;
if(out > pid->outputMax) out = pid->outputMax;
if(out < pid->outputMin) out = pid->outputMin;
pid->prevError = error;
return out;
}


void pidReset(PID_t* pid)
{
pid->integrator = 0.0f;
pid->prevError = 0.0f;
}
