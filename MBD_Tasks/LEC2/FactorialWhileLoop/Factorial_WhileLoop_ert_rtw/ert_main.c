/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "Factorial_WhileLoop.h"       /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL_Factorial_WhileLoop_T Factorial_WhileLoop_M_;
static RT_MODEL_Factorial_WhileLoop_T *const Factorial_WhileLoop_MPtr =
  &Factorial_WhileLoop_M_;             /* Real-time model */
static DW_Factorial_WhileLoop_T Factorial_WhileLoop_DW;/* Observable states */

/* '<Root>/In1' */
static int32_T Factorial_WhileLoop_U_In1;

/* '<Root>/Out1' */
static int32_T Factorial_WhileLoop_Y_Out1;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_Factorial_WhileLoop_T *const Factorial_WhileLoop_M);
void rt_OneStep(RT_MODEL_Factorial_WhileLoop_T *const Factorial_WhileLoop_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(Factorial_WhileLoop_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  Factorial_WhileLoop_step(Factorial_WhileLoop_M, Factorial_WhileLoop_U_In1,
    &Factorial_WhileLoop_Y_Out1);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL_Factorial_WhileLoop_T *const Factorial_WhileLoop_M =
    Factorial_WhileLoop_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  Factorial_WhileLoop_M->dwork = &Factorial_WhileLoop_DW;

  /* Initialize model */
  Factorial_WhileLoop_initialize(Factorial_WhileLoop_M,
    &Factorial_WhileLoop_U_In1, &Factorial_WhileLoop_Y_Out1);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.2 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(Factorial_WhileLoop_M);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(Factorial_WhileLoop_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Factorial_WhileLoop_terminate(Factorial_WhileLoop_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
