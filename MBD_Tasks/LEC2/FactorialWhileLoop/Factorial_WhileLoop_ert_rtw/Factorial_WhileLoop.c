/*
 * File: Factorial_WhileLoop.c
 *
 * Code generated for Simulink model 'Factorial_WhileLoop'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 26 04:34:22 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Factorial_WhileLoop.h"
#include "Factorial_WhileLoop_private.h"

/* Model step function */
void Factorial_WhileLoop_step(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M, int32_T Factorial_WhileLoop_U_In1, int32_T
  *Factorial_WhileLoop_Y_Out1)
{
  DW_Factorial_WhileLoop_T *Factorial_WhileLoop_DW =
    Factorial_WhileLoop_M->dwork;
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Constant: '<Root>/Constant' */
  loopCond = true;
  while (loopCond && (s1_iter <= 20)) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    *Factorial_WhileLoop_Y_Out1 = Factorial_WhileLoop_DW->UnitDelay_DSTATE *
      s1_iter;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    Factorial_WhileLoop_DW->UnitDelay_DSTATE = *Factorial_WhileLoop_Y_Out1;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Inport: '<Root>/In1'
     */
    loopCond = (s1_iter < Factorial_WhileLoop_U_In1);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_WhileLoop_initialize(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M, int32_T *Factorial_WhileLoop_U_In1, int32_T
  *Factorial_WhileLoop_Y_Out1)
{
  DW_Factorial_WhileLoop_T *Factorial_WhileLoop_DW =
    Factorial_WhileLoop_M->dwork;

  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)Factorial_WhileLoop_DW, 0,
                sizeof(DW_Factorial_WhileLoop_T));

  /* external inputs */
  *Factorial_WhileLoop_U_In1 = 0;

  /* external outputs */
  (*Factorial_WhileLoop_Y_Out1) = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_WhileLoop_DW->UnitDelay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_WhileLoop_terminate(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Factorial_WhileLoop_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
