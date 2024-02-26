/*
 * File: EvenOdd.h
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

#ifndef RTW_HEADER_EvenOdd_h_
#define RTW_HEADER_EvenOdd_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef EvenOdd_COMMON_INCLUDES_
#define EvenOdd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EvenOdd_COMMON_INCLUDES_ */

#include "EvenOdd_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S1>/String Constant' */
  const char_T StringConstant1[256];   /* '<S1>/String Constant1' */
} ConstB_EvenOdd_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_EvenOdd_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_EvenOdd_T;

/* Real-time Model Data Structure */
struct tag_RTM_EvenOdd_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_EvenOdd_T EvenOdd_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EvenOdd_T EvenOdd_Y;
extern const ConstB_EvenOdd_T EvenOdd_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void EvenOdd_initialize(void);
extern void EvenOdd_step(void);
extern void EvenOdd_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EvenOdd_T *const EvenOdd_M;

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
 * '<Root>' : 'EvenOdd'
 * '<S1>'   : 'EvenOdd/Even_Odd'
 * '<S2>'   : 'EvenOdd/Even_Odd/If Action Subsystem'
 * '<S3>'   : 'EvenOdd/Even_Odd/If Action Subsystem1'
 * '<S4>'   : 'EvenOdd/Even_Odd/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_EvenOdd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
