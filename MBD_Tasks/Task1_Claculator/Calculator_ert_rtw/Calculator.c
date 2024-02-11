/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Feb 11 20:07:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Model step function */
void Calculator_step(void)
{
  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  Calculator_Y.Out2 = Calculator_U.In1 + Calculator_U.In2;

  /* Switch: '<S1>/FixPt Switch4' incorporates:
   *  Constant: '<S1>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  RelationalOperator: '<S1>/FixPt Relational Operator3'
   */
  if (Calculator_U.In3 > 1.0) {
    /* Outport: '<Root>/Out8' incorporates:
     *  Sum: '<S1>/FixPt Sum1'
     */
    Calculator_Y.Out8 = Calculator_U.In3 - 1.0;
  } else {
    /* Outport: '<Root>/Out8' */
    Calculator_Y.Out8 = 0.0;
  }

  /* End of Switch: '<S1>/FixPt Switch4' */

  /* Outport: '<Root>/Out7' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  Sum: '<S2>/FixPt Sum1'
   */
  Calculator_Y.Out7 = Calculator_U.In3 + 1.0;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  Calculator_Y.Out3 = Calculator_U.In1 - Calculator_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  Calculator_Y.Out4 = Calculator_U.In1 / Calculator_U.In2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  Calculator_Y.Out5 = Calculator_U.In1 * Calculator_U.In2;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In3'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  Calculator_Y.Out6 = -Calculator_U.In3;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
