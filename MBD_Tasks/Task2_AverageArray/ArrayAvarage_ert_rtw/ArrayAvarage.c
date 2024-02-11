/*
 * File: ArrayAvarage.c
 *
 * Code generated for Simulink model 'ArrayAvarage'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Feb 11 20:33:21 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ArrayAvarage.h"
#include "ArrayAvarage_private.h"

/* Block states (default storage) */
DW_ArrayAvarage_T ArrayAvarage_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ArrayAvarage_T ArrayAvarage_Y;

/* Real-time model */
static RT_MODEL_ArrayAvarage_T ArrayAvarage_M_;
RT_MODEL_ArrayAvarage_T *const ArrayAvarage_M = &ArrayAvarage_M_;

/* Model step function */
void ArrayAvarage_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void ArrayAvarage_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Out1' */
  ArrayAvarage_Y.Out1 = ArrayAvarage_ConstB.MinMax;

  /* ConstCode for Outport: '<Root>/Out2' */
  ArrayAvarage_Y.Out2 = ArrayAvarage_ConstB.MinMax1;

  /* ConstCode for Outport: '<Root>/Out3' */
  ArrayAvarage_Y.Out3 = ArrayAvarage_ConstB.SumofElements;

  /* ConstCode for Outport: '<Root>/Out4' */
  ArrayAvarage_Y.Out4 = ArrayAvarage_ConstB.Mean;
}

/* Model terminate function */
void ArrayAvarage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
