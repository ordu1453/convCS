/*
 * File: DischargeDuty.h
 *
 * Code generated for Simulink model 'DischargeDuty'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Jan 29 09:33:30 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DischargeDuty_h_
#define RTW_HEADER_DischargeDuty_h_
#ifndef DischargeDuty_COMMON_INCLUDES_
#define DischargeDuty_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#endif                                 /* DischargeDuty_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  double DischargeDelay1_DSTATE;       /* '<S1>/DischargeDelay1' */
  double DischargeDelay_DSTATE;        /* '<S1>/DischargeDelay' */
  double DischargeIntegrator_DSTATE;   /* '<S1>/DischargeIntegrator' */
  double DischargeIntegrator1_DSTATE;  /* '<S1>/DischargeIntegrator1' */
} DW;

/* Storage class 'SignalStruct', for system '<Root>' */
typedef struct {
  double InductorCurrent;              /* '<Root>/Inductor Current' */
  double OutputVoltage;                /* '<Root>/Output Voltage' */
  double targetVoltageDischarge;       /* '<Root>/Target Voltage' */
  double TargetDuty;                   /* '<Root>/Target Duty' */
  double ErrorVoltage;                 /* '<Root>/Error Voltage' */
  double PICurrentOutput;              /* '<Root>/PI Current Output' */
  double CurrentError;                 /* '<Root>/Current Error' */
} DischargeDuty_Signals_T;

/* Block signals and states (default storage) */
extern DW rtDW;

/* Model entry point functions */
extern void DischargeDuty_initialize(void);
extern void DischargeDuty_step(void);

/* Storage class 'SignalStruct' */
extern DischargeDuty_Signals_T DischargeDuty_Signals;/* '<Root>/Inductor Current' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 */

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
 * hilite_system('Converter_Control_System_Subsystem/DischargeDuty(Duty-ratio calculation in discharge mode)')    - opens subsystem Converter_Control_System_Subsystem/DischargeDuty(Duty-ratio calculation in discharge mode)
 * hilite_system('Converter_Control_System_Subsystem/DischargeDuty(Duty-ratio calculation in discharge mode)/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Converter_Control_System_Subsystem'
 * '<S1>'   : 'Converter_Control_System_Subsystem/DischargeDuty(Duty-ratio calculation in discharge mode)'
 */
#endif                                 /* RTW_HEADER_DischargeDuty_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
