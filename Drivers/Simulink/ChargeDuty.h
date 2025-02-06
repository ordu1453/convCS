/*
 * File: ChargeDuty.h
 *
 * Code generated for Simulink model 'ChargeDuty'.
 *
 * Model version                  : 1.58
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Feb  6 11:49:05 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ChargeDuty_h_
#define RTW_HEADER_ChargeDuty_h_
#ifndef ChargeDuty_COMMON_INCLUDES_
#define ChargeDuty_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#endif                                 /* ChargeDuty_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  double ChargeDelay1_DSTATE;          /* '<S1>/ChargeDelay1' */
  double ChargeDelay_DSTATE;           /* '<S1>/ChargeDelay' */
  double ChargeIntegrator_DSTATE;      /* '<S1>/ChargeIntegrator' */
  double ChargeIntegrator1_DSTATE;     /* '<S1>/ChargeIntegrator1' */
} DW1;

/* Storage class 'SignalStruct', for system '<Root>' */
typedef struct {
  double InductorCurrent;              /* '<Root>/Inductor Current' */
  double InputVoltage;                 /* '<Root>/Input Voltage' */
  double TargetVoltage;                /* '<Root>/Target Voltage' */
  double TargetDuty;                   /* '<Root>/Target Duty' */
  double ErrorVoltage;                 /* '<Root>/Error Voltage' */
  double PICurrentOutput;              /* '<Root>/PI Current Output' */
  double CurrentError;                 /* '<Root>/Current Error' */
} ChargeDuty_Signals_T;

/* Block signals and states (default storage) */
extern DW1 rtDW1;

/* Model entry point functions */
extern void ChargeDuty_step(void);

/* Storage class 'SignalStruct' */
extern ChargeDuty_Signals_T ChargeDuty_Signals;/* '<Root>/Inductor Current' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Converter_Control_System_Subsystem/ChargeDuty(Duty-ratio calculation in charge mode)')    - opens subsystem Converter_Control_System_Subsystem/ChargeDuty(Duty-ratio calculation in charge mode)
 * hilite_system('Converter_Control_System_Subsystem/ChargeDuty(Duty-ratio calculation in charge mode)/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Converter_Control_System_Subsystem'
 * '<S1>'   : 'Converter_Control_System_Subsystem/ChargeDuty(Duty-ratio calculation in charge mode)'
 */
#endif                                 /* RTW_HEADER_ChargeDuty_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
