/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb 27 01:16:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* Model step function */
void GradingSystem_step(RT_MODEL_GradingSystem_T *const GradingSystem_M, real_T
  GradingSystem_U_In1, char_T GradingSystem_Y_Out1[256])
{
  /* Outputs for Atomic SubSystem: '<Root>/Grading_System' */
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  Inport: '<S4>/In1'
   *  Inport: '<S5>/In1'
   *  Inport: '<S6>/In1'
   *  Inport: '<S7>/In1'
   *  Outport: '<Root>/Out1'
   */
  if ((GradingSystem_U_In1 >= 85.0) && (GradingSystem_U_In1 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    GradingSystem_Y_Out1[255] = '\x00';
  } else if ((GradingSystem_U_In1 >= 75.0) && (GradingSystem_U_In1 < 85.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant1[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    GradingSystem_Y_Out1[255] = '\x00';
  } else if ((GradingSystem_U_In1 >= 65.0) && (GradingSystem_U_In1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant2[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    GradingSystem_Y_Out1[255] = '\x00';
  } else if ((GradingSystem_U_In1 >= 50.0) && (GradingSystem_U_In1 < 65.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant3[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    GradingSystem_Y_Out1[255] = '\x00';
  } else if ((GradingSystem_U_In1 >= 0.0) && (GradingSystem_U_In1 < 50.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant4[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    GradingSystem_Y_Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    strncpy(&GradingSystem_Y_Out1[0], &GradingSystem_ConstB.StringConstant5[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    GradingSystem_Y_Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for SubSystem: '<Root>/Grading_System' */
  UNUSED_PARAMETER(GradingSystem_M);
}

/* Model initialize function */
void GradingSystem_initialize(RT_MODEL_GradingSystem_T *const GradingSystem_M,
  real_T *GradingSystem_U_In1, char_T GradingSystem_Y_Out1[256])
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GradingSystem_M, (NULL));

  /* external inputs */
  *GradingSystem_U_In1 = 0.0;

  /* external outputs */
  (void) memset(&GradingSystem_Y_Out1[0], 0,
                256U*sizeof(char_T));
  UNUSED_PARAMETER(GradingSystem_M);
}

/* Model terminate function */
void GradingSystem_terminate(RT_MODEL_GradingSystem_T *const GradingSystem_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(GradingSystem_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
