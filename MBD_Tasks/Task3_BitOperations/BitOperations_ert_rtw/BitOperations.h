/*
 * File: BitOperations.h
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

#ifndef RTW_HEADER_BitOperations_h_
#define RTW_HEADER_BitOperations_h_
#ifndef BitOperations_COMMON_INCLUDES_
#define BitOperations_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BitOperations_COMMON_INCLUDES_ */

#include "BitOperations_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
  boolean_T In2;                       /* '<Root>/In2' */
} ExtU_BitOperations_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out7;                      /* '<Root>/Out7' */
} ExtY_BitOperations_T;

/* Real-time Model Data Structure */
struct tag_RTM_BitOperations_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_BitOperations_T BitOperations_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BitOperations_T BitOperations_Y;

/* Model entry point functions */
extern void BitOperations_initialize(void);
extern void BitOperations_step(void);
extern void BitOperations_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BitOperations_T *const BitOperations_M;

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
 * '<Root>' : 'BitOperations'
 */
#endif                                 /* RTW_HEADER_BitOperations_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
