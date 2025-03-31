/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power_iteration_initialize.c
 *
 * Code generation for function 'power_iteration_initialize'
 *
 */

/* Include files */
#include "power_iteration_initialize.h"
#include "_coder_power_iteration_mex.h"
#include "power_iteration_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void power_iteration_once(void);

/* Function Definitions */
static void power_iteration_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void power_iteration_initialize(void)
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, NULL);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    power_iteration_once();
  }
}

/* End of code generation (power_iteration_initialize.c) */
