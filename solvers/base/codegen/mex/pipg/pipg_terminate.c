/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pipg_terminate.c
 *
 * Code generation for function 'pipg_terminate'
 *
 */

/* Include files */
#include "pipg_terminate.h"
#include "_coder_pipg_mex.h"
#include "pipg_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void pipg_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void pipg_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (pipg_terminate.c) */
