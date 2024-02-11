/*
 * File: BitOperations.c
 *
 * Code generated for Simulink model 'BitOperations'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Feb 11 20:47:06 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BitOperations.h"
#include "BitOperations_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_BitOperations_T BitOperations_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BitOperations_T BitOperations_Y;

/* Real-time model */
static RT_MODEL_BitOperations_T BitOperations_M_;
RT_MODEL_BitOperations_T *const BitOperations_M = &BitOperations_M_;

/* Model step function */
void BitOperations_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/AND'
   */
  BitOperations_Y.Out1 = (BitOperations_U.In2 && BitOperations_U.In1);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/OR'
   */
  BitOperations_Y.Out2 = (BitOperations_U.In1 || BitOperations_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/XOR'
   */
  BitOperations_Y.Out3 = BitOperations_U.In1 ^ BitOperations_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator'
   */
  BitOperations_Y.Out4 = (BitOperations_U.In1 == BitOperations_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/NOT'
   */
  BitOperations_Y.Out5 = !BitOperations_U.In2;

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/In1'
   *  Logic: '<Root>/NOT1'
   */
  BitOperations_Y.Out7 = !BitOperations_U.In1;
}

/* Model initialize function */
void BitOperations_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void BitOperations_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
