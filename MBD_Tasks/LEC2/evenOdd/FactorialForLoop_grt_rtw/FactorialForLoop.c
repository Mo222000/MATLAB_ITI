/*
 * FactorialForLoop.c
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

#include "FactorialForLoop.h"
#include "FactorialForLoop_private.h"

/* Block states (default storage) */
DW_FactorialForLoop_T FactorialForLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FactorialForLoop_T FactorialForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialForLoop_T FactorialForLoop_Y;

/* Real-time model */
static RT_MODEL_FactorialForLoop_T FactorialForLoop_M_;
RT_MODEL_FactorialForLoop_T *const FactorialForLoop_M = &FactorialForLoop_M_;

/* Model step function */
void FactorialForLoop_step(void)
{
  uint32_T s1_iter;
  uint32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/in1' */
  tmp = FactorialForLoop_U.in1;
  if (FactorialForLoop_U.in1 > 2147483646U) {
    tmp = 2147483646U;
  }

  /* End of Inport: '<Root>/in1' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    FactorialForLoop_Y.Out1 = FactorialForLoop_DW.UnitDelay_DSTATE * s1_iter;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    FactorialForLoop_DW.UnitDelay_DSTATE = FactorialForLoop_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(FactorialForLoop_M->rtwLogInfo,
                      (&FactorialForLoop_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(FactorialForLoop_M)!=-1) &&
        !((rtmGetTFinal(FactorialForLoop_M)-FactorialForLoop_M->Timing.taskTime0)
          > FactorialForLoop_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(FactorialForLoop_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FactorialForLoop_M->Timing.clockTick0)) {
    ++FactorialForLoop_M->Timing.clockTickH0;
  }

  FactorialForLoop_M->Timing.taskTime0 = FactorialForLoop_M->Timing.clockTick0 *
    FactorialForLoop_M->Timing.stepSize0 +
    FactorialForLoop_M->Timing.clockTickH0 *
    FactorialForLoop_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void FactorialForLoop_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FactorialForLoop_M, 0,
                sizeof(RT_MODEL_FactorialForLoop_T));
  rtmSetTFinal(FactorialForLoop_M, 10.0);
  FactorialForLoop_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    FactorialForLoop_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(FactorialForLoop_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(FactorialForLoop_M->rtwLogInfo, (NULL));
    rtliSetLogT(FactorialForLoop_M->rtwLogInfo, "tout");
    rtliSetLogX(FactorialForLoop_M->rtwLogInfo, "");
    rtliSetLogXFinal(FactorialForLoop_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(FactorialForLoop_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(FactorialForLoop_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(FactorialForLoop_M->rtwLogInfo, 0);
    rtliSetLogDecimation(FactorialForLoop_M->rtwLogInfo, 1);
    rtliSetLogY(FactorialForLoop_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(FactorialForLoop_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(FactorialForLoop_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&FactorialForLoop_DW, 0,
                sizeof(DW_FactorialForLoop_T));

  /* external inputs */
  FactorialForLoop_U.in1 = 0U;

  /* external outputs */
  FactorialForLoop_Y.Out1 = 0U;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(FactorialForLoop_M->rtwLogInfo, 0.0,
    rtmGetTFinal(FactorialForLoop_M), FactorialForLoop_M->Timing.stepSize0,
    (&rtmGetErrorStatus(FactorialForLoop_M)));

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  FactorialForLoop_DW.UnitDelay_DSTATE =
    FactorialForLoop_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Outport: '<S1>/u'
   */
  FactorialForLoop_Y.Out1 = FactorialForLoop_P.u_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void FactorialForLoop_terminate(void)
{
  /* (no terminate code required) */
}
