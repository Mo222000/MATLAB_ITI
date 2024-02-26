/*
 * File: EvenOdd.c
 *
 * Code generated for Simulink model 'EvenOdd'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 26 03:53:58 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EvenOdd.h"
#include "EvenOdd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_EvenOdd_T EvenOdd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EvenOdd_T EvenOdd_Y;

/* Real-time model */
static RT_MODEL_EvenOdd_T EvenOdd_M_;
RT_MODEL_EvenOdd_T *const EvenOdd_M = &EvenOdd_M_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T u1_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void EvenOdd_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Even_Odd' */
  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  If: '<S1>/If'
   *  Inport: '<Root>/In1'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  Outport: '<Root>/Out1'
   */
  /* MATLAB Function 'Even_Odd/MATLAB Function': '<S4>:1' */
  /* '<S4>:1:2' if rem(u,2) == 0 */
  if (rt_remd_snf(EvenOdd_U.In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* '<S4>:1:3' Num = 0; */
    strncpy(&EvenOdd_Y.Out1[0], &EvenOdd_ConstB.StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    EvenOdd_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* '<S4>:1:4' else */
    /* '<S4>:1:5' Num = 1; */
    strncpy(&EvenOdd_Y.Out1[0], &EvenOdd_ConstB.StringConstant1[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    EvenOdd_Y.Out1[255] = '\x00';
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */
  /* End of Outputs for SubSystem: '<Root>/Even_Odd' */
}

/* Model initialize function */
void EvenOdd_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(EvenOdd_M, (NULL));

  /* external inputs */
  EvenOdd_U.In1 = 0.0;

  /* external outputs */
  (void) memset(&EvenOdd_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void EvenOdd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
