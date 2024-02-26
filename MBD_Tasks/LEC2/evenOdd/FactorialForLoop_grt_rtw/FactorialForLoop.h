/*
 * FactorialForLoop.h
 *
 * Code generation for model "FactorialForLoop".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Feb 26 04:06:03 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialForLoop_h_
#define RTW_HEADER_FactorialForLoop_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef FactorialForLoop_COMMON_INCLUDES_
#define FactorialForLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* FactorialForLoop_COMMON_INCLUDES_ */

#include "FactorialForLoop_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S1>/Unit Delay' */
} DW_FactorialForLoop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T in1;                        /* '<Root>/in1' */
} ExtU_FactorialForLoop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
} ExtY_FactorialForLoop_T;

/* Parameters (default storage) */
struct P_FactorialForLoop_T_ {
  uint32_T u_Y0;                       /* Computed Parameter: u_Y0
                                        * Referenced by: '<S1>/u'
                                        */
  uint32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S1>/Unit Delay'
                                */
};

/* Real-time Model Data Structure */
struct tag_RTM_FactorialForLoop_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_FactorialForLoop_T FactorialForLoop_P;

/* Block states (default storage) */
extern DW_FactorialForLoop_T FactorialForLoop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialForLoop_T FactorialForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialForLoop_T FactorialForLoop_Y;

/* Model entry point functions */
extern void FactorialForLoop_initialize(void);
extern void FactorialForLoop_step(void);
extern void FactorialForLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialForLoop_T *const FactorialForLoop_M;

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
 * '<Root>' : 'FactorialForLoop'
 * '<S1>'   : 'FactorialForLoop/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_FactorialForLoop_h_ */
