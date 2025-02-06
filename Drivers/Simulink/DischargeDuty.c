
/*
 * File: DischargeDuty.c
 *
 * Code generated for Simulink model 'DischargeDuty'.
 *
 * Model version                  : 1.52
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Jan 28 10:34:15 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "DischargeDuty.h"

/* Storage class 'SignalStruct' */
DischargeDuty_Signals_T DischargeDuty_Signals;/* '<Root>/Inductor Current' */

/* Block signals and states (default storage) */
DW rtDW;

double rtb_CurrentError;
double rtb_ErrorVoltage;
double rtb_PICurrentOutput_d;
double u0;
/* Model step function */
void DischargeDuty_step(void)
{
   rtb_CurrentError = 0;
   rtb_ErrorVoltage = 0;
   rtb_PICurrentOutput_d = 0;
   u0 = 0;


   /* Sum: '<S1>/Sum4' incorporates:
    *  Inport: '<Root>/Target Voltage'
    *  UnitDelay: '<S1>/DischargeDelay'
    */
   rtb_ErrorVoltage = DischargeDuty_Signals.targetVoltageDischarge -
     rtDW.DischargeDelay_DSTATE;

   /* Sum: '<S1>/Sum6' incorporates:
    *  DiscreteIntegrator: '<S1>/DischargeIntegrator'
    *  Gain: '<S1>/Gain1'
    */
   rtb_PICurrentOutput_d = 5 * rtb_ErrorVoltage +
     rtDW.DischargeIntegrator_DSTATE;

   /* Saturate: '<S1>/DischargeSaturation' */
   if (rtb_PICurrentOutput_d > 5000) {
     rtb_PICurrentOutput_d = 5000;
   } else if (rtb_PICurrentOutput_d < 0) {
     rtb_PICurrentOutput_d = 0;
   }

   /* End of Saturate: '<S1>/DischargeSaturation' */

   /* Sum: '<S1>/Sum5' incorporates:
    *  UnitDelay: '<S1>/DischargeDelay1'
    */
   rtb_CurrentError = rtb_PICurrentOutput_d - rtDW.DischargeDelay1_DSTATE;

   /* Sum: '<S1>/Sum7' incorporates:
    *  DiscreteIntegrator: '<S1>/DischargeIntegrator1'
    *  Gain: '<S1>/Gain3'
    */
   u0 = 20.0 * rtb_CurrentError + rtDW.DischargeIntegrator1_DSTATE;

   /* Saturate: '<S1>/DischargeSaturation1' */
   if (u0 > 62259) {
     /* Outport: '<Root>/Target Duty' */
     DischargeDuty_Signals.TargetDuty = 62259;
   } else if (u0 < 3277) {
     /* Outport: '<Root>/Target Duty' */
     DischargeDuty_Signals.TargetDuty = 3277;
   } else {
     /* Outport: '<Root>/Target Duty' */
     DischargeDuty_Signals.TargetDuty = u0;
   }

   /* End of Saturate: '<S1>/DischargeSaturation1' */

   /* Outport: '<Root>/Current Error' */
   DischargeDuty_Signals.CurrentError = rtb_CurrentError;

   /* Outport: '<Root>/PI Current Output' */
   DischargeDuty_Signals.PICurrentOutput = rtb_PICurrentOutput_d;

   /* Outport: '<Root>/Error Voltage' */
   DischargeDuty_Signals.ErrorVoltage = rtb_ErrorVoltage;

   /* Update for UnitDelay: '<S1>/DischargeDelay1' incorporates:
    *  Inport: '<Root>/Inductor Current'
    */
   rtDW.DischargeDelay1_DSTATE = DischargeDuty_Signals.InductorCurrent;

   /* Update for UnitDelay: '<S1>/DischargeDelay' incorporates:
    *  Inport: '<Root>/Output Voltage'
    */
   rtDW.DischargeDelay_DSTATE = DischargeDuty_Signals.OutputVoltage;

   /* Update for DiscreteIntegrator: '<S1>/DischargeIntegrator' incorporates:
    *  Gain: '<S1>/Gain2'
    */
   rtDW.DischargeIntegrator_DSTATE += 150 * rtb_ErrorVoltage * 0.0001;
   if (rtDW.DischargeIntegrator_DSTATE > 5200) {
     rtDW.DischargeIntegrator_DSTATE = 5200;
   } else if (rtDW.DischargeIntegrator_DSTATE < -5200) {
     rtDW.DischargeIntegrator_DSTATE = -5200;
   }

   /* End of Update for DiscreteIntegrator: '<S1>/DischargeIntegrator' */

   /* Update for DiscreteIntegrator: '<S1>/DischargeIntegrator1' incorporates:
    *  Gain: '<S1>/Gain4'
    */
   rtDW.DischargeIntegrator1_DSTATE += 150 * rtb_CurrentError * 0.0001;
   if (rtDW.DischargeIntegrator1_DSTATE > 52000) {
     rtDW.DischargeIntegrator1_DSTATE = 52000;
   } else if (rtDW.DischargeIntegrator1_DSTATE < -52000) {
     rtDW.DischargeIntegrator1_DSTATE = -52000;
   }

   /* End of Update for DiscreteIntegrator: '<S1>/DischargeIntegrator1' */
 }


 /*
  * File trailer for generated code.
  *
  * [EOF]
  */
