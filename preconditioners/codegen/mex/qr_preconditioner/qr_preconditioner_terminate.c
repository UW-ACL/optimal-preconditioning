/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner_terminate.c
 *
 * Code generation for function 'qr_preconditioner_terminate'
 *
 */

/* Include files */
#include "qr_preconditioner_terminate.h"
#include "_coder_qr_preconditioner_mex.h"
#include "qr_preconditioner_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void qr_preconditioner_atexit(void)
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

void qr_preconditioner_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (qr_preconditioner_terminate.c) */
