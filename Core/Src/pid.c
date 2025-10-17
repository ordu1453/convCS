/*
 * pid.c
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */


#include "pid.h"

// =======================
// --- Одиночный ПИ ---
// =======================
void piInit(PIController_t* pi, float kp, float ki, float dt, float outMin, float outMax)
{
    pi->kp = kp;
    pi->ki = ki;
    pi->dt = dt;
    pi->outMin = outMin;
    pi->outMax = outMax;
    pi->integral = 0.0f;
    pi->output = 0u;
}

unsigned int piUpdate(PIController_t* pi, float setpoint, float measurement)
{
    float error = setpoint - measurement;
    pi->integral += error * pi->ki * pi->dt;

    // Антивиндап
    if (pi->integral > pi->outMax) pi->integral = pi->outMax;
    else if (pi->integral < pi->outMin) pi->integral = pi->outMin;

    unsigned int output = pi->kp * error + pi->integral;

    // Ограничение выхода
    if (output > pi->outMax) output = pi->outMax;
    else if (output < pi->outMin) output = pi->outMin;

    pi->output = output;
    return output;
}

void piReset(PIController_t* pi)
{
    pi->integral = 0.0f;
    pi->output = 0.0f;
}

// ================================
// --- Составной ПИ-регулятор ---
// ================================
void pi2Init(PI2Controller_t* pi2,
             float kp_v, float ki_v,
             float kp_i, float ki_i,
             float dt, float inMin, float inMax,
			 float outMin, float outMax)
{
    piInit(&pi2->voltageLoop, kp_v, ki_v, dt, inMin, inMax);
    piInit(&pi2->currentLoop, kp_i, ki_i, dt, outMin, outMax);
}

unsigned int pi2Update(PI2Controller_t* pi2,
                float voltageSet, float voltageMeas,
                float currentMeas)
{
    // Внешний контур (напряжение) формирует целевой ток
    unsigned int currentRef = piUpdate(&pi2->voltageLoop, voltageSet, voltageMeas);

    // Внутренний контур (ток) управляет выходом (ШИМ)
    unsigned int duty = piUpdate(&pi2->currentLoop, currentRef, currentMeas);

    return duty;
}

void pi2Reset(PI2Controller_t* pi2)
{
    piReset(&pi2->voltageLoop);
    piReset(&pi2->currentLoop);
}
