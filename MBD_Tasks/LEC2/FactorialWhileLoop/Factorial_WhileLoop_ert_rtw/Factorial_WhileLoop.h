/*
 * File: Factorial_WhileLoop.h
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

#ifndef RTW_HEADER_Factorial_WhileLoop_h_
#define RTW_HEADER_Factorial_WhileLoop_h_
#include <string.h>
#ifndef Factorial_WhileLoop_COMMON_INCLUDES_
#define Factorial_WhileLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* Factorial_WhileLoop_COMMON_INCLUDES_ */

#include "Factorial_WhileLoop_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T UnitDelay_DSTATE;            /* '<S1>/Unit Delay' */
} DW_Factorial_WhileLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_WhileLoop_T {
  const char_T * volatile errorStatus;
  DW_Factorial_WhileLoop_T *dwork;
};

/* Model entry point functions */
extern void Factorial_WhileLoop_initialize(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M, int32_T *Factorial_WhileLoop_U_In1, int32_T
  *Factorial_WhileLoop_Y_Out1);
extern void Factorial_WhileLoop_step(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M, int32_T Factorial_WhileLoop_U_In1, int32_T
  *Factorial_WhileLoop_Y_Out1);
extern void Factorial_WhileLoop_terminate(RT_MODEL_Factorial_WhileLoop_T *const
  Factorial_WhileLoop_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Factorial_WhileLoop'
 * '<S1>'   : 'Factorial_WhileLoop/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_Factorial_WhileLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
