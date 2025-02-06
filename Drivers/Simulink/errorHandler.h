/*
 * File: errorHandler.h
 *
 * Code generated for Simulink model 'errorHandler'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Jan 29 13:05:17 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_errorHandler_h_
#define RTW_HEADER_errorHandler_h_
#ifndef errorHandler_COMMON_INCLUDES_
#define errorHandler_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#endif                                 /* errorHandler_COMMON_INCLUDES_ */

/* Storage class 'SignalStruct', for system '<Root>' */
typedef struct {
  double inputCurrent;                 /* '<Root>/inputCurrent' */
  double outputCurrent;                /* '<Root>/outputCurrent' */
  double inputVoltage;                 /* '<Root>/inputVoltage' */
  double pwmState;                     /* '<Root>/pwmState' */
  double overCurrent;                  /* '<Root>/overCurrent' */
  double underVoltage;                 /* '<Root>/underVoltage' */
  double readyState;                   /* '<Root>/readyState' */
} errorHandler_Signals_T;

/* Model entry point functions */
extern void errorHandler_initialize(void);
extern void errorHandler_step(void);

/* Storage class 'SignalStruct' */
extern errorHandler_Signals_T errorHandler_Signals;/* '<Root>/inputCurrent' */

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
 * hilite_system('Converter_Control_System_Subsystem/errorHandler')    - opens subsystem Converter_Control_System_Subsystem/errorHandler
 * hilite_system('Converter_Control_System_Subsystem/errorHandler/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Converter_Control_System_Subsystem'
 * '<S1>'   : 'Converter_Control_System_Subsystem/errorHandler'
 * '<S2>'   : 'Converter_Control_System_Subsystem/errorHandler/Compare To Constant'
 * '<S3>'   : 'Converter_Control_System_Subsystem/errorHandler/Compare To Constant1'
 * '<S4>'   : 'Converter_Control_System_Subsystem/errorHandler/Compare To Constant2'
 */
#endif                                 /* RTW_HEADER_errorHandler_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
