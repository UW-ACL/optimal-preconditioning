/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power_iteration_terminate.c
 *
 * Code generation for function 'power_iteration_terminate'
 *
 */

/* Include files */
#include "power_iteration_terminate.h"
#include "_coder_power_iteration_mex.h"
#include "power_iteration_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void power_iteration_atexit(void)
{
  mexFunctionCreateRootTLS();
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void power_iteration_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (power_iteration_terminate.c) */
