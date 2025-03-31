/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere_terminate.c
 *
 * Code generation for function 'hypersphere_terminate'
 *
 */

/* Include files */
#include "hypersphere_terminate.h"
#include "_coder_hypersphere_mex.h"
#include "hypersphere_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hypersphere_atexit(void)
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

void hypersphere_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (hypersphere_terminate.c) */
