/*
 * pid.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_PID_H_
#define INC_PID_H_


#include <stdint.h>
#include "main.h"
#include "config.h"

// -------------------------------
// Структура одного ПИ-регулятора
// -------------------------------
typedef struct {
    float kp;
    float ki;
    float dt;
    float integral;
    float outMin;
    float outMax;
    float output;
} PIController_t;

/*
 *
 *
 *           ┌────────────────────────────────────┐
             │            ПИ-РЕГУЛЯТОР            │
             └────────────────────────────────────┘

                     ┌─────────────┐
   r(t) ─►( + )─────►│   e(t)      │───────────┐
           ▲         └─────────────┘           │
           │                                   ▼
           │                           ┌─────────────────┐
           │                           │  Kp + Ki * ∫e(t)│
           │                           └─────────────────┘
           │                                    │
           │                                    ▼
           │                                 ┌──────┐
           └─────────────────────────────────┤ y(t) │
                                             └──────┘

                                             */


// -------------------------------
// Структура составного регулятора
// -------------------------------
typedef struct {
    PIController_t voltageLoop;  // внешний контур — напряжение
    PIController_t currentLoop;  // внутренний контур — ток
} PI2Controller_t;

/*
 *               ╔════════════════════════════════════╗
                 ║          КАСАДНЫЙ ДВА ПИ           ║
                 ╚════════════════════════════════════╝

       r(t) ───► (+) ───► e1(t) ───►┌────────────────────────┐
                 │                  │u1(t) = Kp1*e1 + Ki1∫e1 │
                 │                  └────────────────────────┘
                 │                            │
                 │                            ▼
                 │                        ┌────────┐
                 │                        │ y1(t)  │
                 │                        └────────┘
                 │                            │
                 │           ┌────────────────┘
                 │           ▼
                 │       (+) ───► e2(t) ───►┌────────────────────────┐
                 │       │                  │u2(t) = Kp2*e2 + Ki2∫e2 │
                 │       │                  └────────────────────────┘
                 │       │                            │
                 │       │                            ▼
                 │       │                         ┌────────┐
                 └───────┴────────────────────────►│ y2(t)  │
                                                   └────────┘

 *
*/




// -------------------------------
// Функции одиночного ПИ-регулятора
// -------------------------------
void piInit(PIController_t* pi, float kp, float ki, float dt, float outMin, float outMax);
float piUpdate(PIController_t* pi, float setpoint, float measurement);
void piReset(PIController_t* pi);

// -------------------------------
// Функции составного ПИ-регулятора
// -------------------------------
void pi2Init(PI2Controller_t* pi2,
             float kp_v, float ki_v,
             float kp_i, float ki_i,
             float dt, float inMin, float inMax,
			 float outMin, float outMax);

float pi2Update(PI2Controller_t* pi2,
                float voltageSet, float voltageMeas,
                float currentMeas);

void pi2Reset(PI2Controller_t* pi2);

#endif /* INC_PID_H_ */
