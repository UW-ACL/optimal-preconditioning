/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ruiz_terminate.c
 *
 * Code generation for function 'ruiz_terminate'
 *
 */

/* Include files */
#include "ruiz_terminate.h"
#include "_coder_ruiz_mex.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"

/* Function Definitions */
void ruiz_atexit(void)
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

void ruiz_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ruiz_terminate.c) */
