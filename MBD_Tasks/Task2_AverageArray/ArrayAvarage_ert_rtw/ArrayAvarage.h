/*
 * File: ArrayAvarage.h
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

#ifndef RTW_HEADER_ArrayAvarage_h_
#define RTW_HEADER_ArrayAvarage_h_
#ifndef ArrayAvarage_COMMON_INCLUDES_
#define ArrayAvarage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ArrayAvarage_COMMON_INCLUDES_ */

#include "ArrayAvarage_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Mean_AccVal;                  /* '<Root>/Mean' */
} DW_ArrayAvarage_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T MinMax;                 /* '<Root>/MinMax' */
  const real_T MinMax1;                /* '<Root>/MinMax1' */
  const real_T SumofElements;          /* '<Root>/Sum of Elements' */
  const real_T Mean;                   /* '<Root>/Mean' */
} ConstB_ArrayAvarage_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_ArrayAvarage_T;

/* Real-time Model Data Structure */
struct tag_RTM_ArrayAvarage_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_ArrayAvarage_T ArrayAvarage_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ArrayAvarage_T ArrayAvarage_Y;
extern const ConstB_ArrayAvarage_T ArrayAvarage_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void ArrayAvarage_initialize(void);
extern void ArrayAvarage_step(void);
extern void ArrayAvarage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ArrayAvarage_T *const ArrayAvarage_M;

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
 * '<Root>' : 'ArrayAvarage'
 */
#endif                                 /* RTW_HEADER_ArrayAvarage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
