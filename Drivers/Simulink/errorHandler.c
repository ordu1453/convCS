/*
 * File: errorHandler.c
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

#include <stdint.h>
#include "errorHandler.h"

/* Storage class 'SignalStruct' */
errorHandler_Signals_T errorHandler_Signals;/* '<Root>/inputCurrent' */

/* Model step function */
void errorHandler_step(void)
{
  int32_t rtb_OR1;

  /* Logic: '<S1>/OR1' incorporates:
   *  Constant: '<S1>/MAX_INPUT_CURRENT'
   *  Constant: '<S1>/MAX_OUTPUT_CURRENT'
   *  Constant: '<S2>/Constant'
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/inputCurrent'
   *  Inport: '<Root>/outputCurrent'
   *  RelationalOperator: '<S2>/Compare'
   *  RelationalOperator: '<S3>/Compare'
   *  Sum: '<S1>/Add'
   *  Sum: '<S1>/Add1'
   */
  rtb_OR1 = ((5000 - errorHandler_Signals.inputCurrent < 0) || (2000 -
              errorHandler_Signals.outputCurrent < 0));

  /* Outport: '<Root>/overCurrent' */
  errorHandler_Signals.overCurrent = rtb_OR1;

  /* Outport: '<Root>/readyState' incorporates:
   *  Constant: '<S1>/MIN_INPUT_VOLTAGE'
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/inputVoltage'
   *  Inport: '<Root>/pwmState'
   *  Logic: '<S1>/AND'
   *  Logic: '<S1>/NOT'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S4>/Compare'
   *  Sum: '<S1>/Add2'
   */
  errorHandler_Signals.readyState = ((rtb_OR1 == 0) && (!(450 -
    errorHandler_Signals.inputVoltage > 0)) && (errorHandler_Signals.pwmState
    != 0));

  /* Outport: '<Root>/underVoltage' incorporates:
   *  Constant: '<S1>/MIN_INPUT_VOLTAGE'
   *  Constant: '<S4>/Constant'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Inport: '<Root>/inputVoltage'
   *  RelationalOperator: '<S4>/Compare'
   *  Sum: '<S1>/Add2'
   */
  errorHandler_Signals.underVoltage = (450 - errorHandler_Signals.inputVoltage
    > 0);
}

/* Model initialize function */
void errorHandler_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
