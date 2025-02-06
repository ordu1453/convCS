/*
 * File: ChargeDuty.c
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

#include "ChargeDuty.h"

/* Storage class 'SignalStruct' */
ChargeDuty_Signals_T ChargeDuty_Signals;/* '<Root>/Inductor Current' */

/* Block signals and states (default storage) */
DW1 rtDW1;

/* Model step function */
void ChargeDuty_step(void)
{
  double rtb_CurrentError;
  double rtb_ErrorVoltage;
  double rtb_PICurrentOutput;
  double u0;

  /* Sum: '<S1>/Sum1' incorporates:
   *  Inport: '<Root>/Target Voltage'
   *  UnitDelay: '<S1>/ChargeDelay'
   */
  rtb_ErrorVoltage = ChargeDuty_Signals.TargetVoltage - rtDW1.ChargeDelay_DSTATE;

  /* Sum: '<S1>/Sum3' incorporates:
   *  DiscreteIntegrator: '<S1>/ChargeIntegrator'
   *  Gain: '<S1>/Gain5'
   */
  rtb_PICurrentOutput = 5 * rtb_ErrorVoltage + rtDW1.ChargeIntegrator_DSTATE;

  /* Saturate: '<S1>/ChargeSaturation' */
  if (rtb_PICurrentOutput > 5000) {
    rtb_PICurrentOutput = 5000;
  } else if (rtb_PICurrentOutput < 0) {
    rtb_PICurrentOutput = 0;
  }

  /* End of Saturate: '<S1>/ChargeSaturation' */

  /* Sum: '<S1>/Sum2' incorporates:
   *  UnitDelay: '<S1>/ChargeDelay1'
   */
  rtb_CurrentError = rtb_PICurrentOutput - rtDW1.ChargeDelay1_DSTATE;

  /* Sum: '<S1>/Sum8' incorporates:
   *  DiscreteIntegrator: '<S1>/ChargeIntegrator1'
   *  Gain: '<S1>/Gain7'
   */
  u0 = 20.0 * rtb_CurrentError + rtDW1.ChargeIntegrator1_DSTATE;

  /* Saturate: '<S1>/DischargeSaturation2' */
  if (u0 > 17099.05) {
    /* Outport: '<Root>/Target Duty' */
    ChargeDuty_Signals.TargetDuty = 17099;
  } else if (u0 < 899.0) {
    /* Outport: '<Root>/Target Duty' */
    ChargeDuty_Signals.TargetDuty = 899;
  } else {
    /* Outport: '<Root>/Target Duty' */
    ChargeDuty_Signals.TargetDuty = u0;
  }

  /* End of Saturate: '<S1>/DischargeSaturation2' */

  /* Outport: '<Root>/Current Error' */
  ChargeDuty_Signals.CurrentError = rtb_CurrentError;

  /* Outport: '<Root>/PI Current Output' */
  ChargeDuty_Signals.PICurrentOutput = rtb_PICurrentOutput;

  /* Outport: '<Root>/Error Voltage' */
  ChargeDuty_Signals.ErrorVoltage = rtb_ErrorVoltage;

  /* Update for UnitDelay: '<S1>/ChargeDelay1' incorporates:
   *  Inport: '<Root>/Inductor Current'
   */
  rtDW1.ChargeDelay1_DSTATE = ChargeDuty_Signals.InductorCurrent;

  /* Update for UnitDelay: '<S1>/ChargeDelay' incorporates:
   *  Inport: '<Root>/Input Voltage'
   */
  rtDW1.ChargeDelay_DSTATE = ChargeDuty_Signals.InputVoltage;

  /* Update for DiscreteIntegrator: '<S1>/ChargeIntegrator' incorporates:
   *  Gain: '<S1>/Gain6'
   */
  rtDW1.ChargeIntegrator_DSTATE += 150 * rtb_ErrorVoltage * 1.0E-5;
  if (rtDW1.ChargeIntegrator_DSTATE > 5200) {
    rtDW1.ChargeIntegrator_DSTATE = 5200;
  } else if (rtDW1.ChargeIntegrator_DSTATE < -5200) {
    rtDW1.ChargeIntegrator_DSTATE = -5200;
  }

  /* End of Update for DiscreteIntegrator: '<S1>/ChargeIntegrator' */

  /* Update for DiscreteIntegrator: '<S1>/ChargeIntegrator1' incorporates:
   *  Gain: '<S1>/Gain8'
   */
  rtDW1.ChargeIntegrator1_DSTATE += 150 * rtb_CurrentError * 1.0E-5;
  if (rtDW1.ChargeIntegrator1_DSTATE > 52000) {
    rtDW1.ChargeIntegrator1_DSTATE = 52000;
  } else if (rtDW1.ChargeIntegrator1_DSTATE < -52000) {
    rtDW1.ChargeIntegrator1_DSTATE = -52000;
  }

  /* End of Update for DiscreteIntegrator: '<S1>/ChargeIntegrator1' */
}


/*
 * File trailer for generated code.
 *
 * [EOF]
 */
