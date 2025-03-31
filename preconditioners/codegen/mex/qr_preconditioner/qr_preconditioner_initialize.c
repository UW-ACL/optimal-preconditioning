/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner_initialize.c
 *
 * Code generation for function 'qr_preconditioner_initialize'
 *
 */

/* Include files */
#include "qr_preconditioner_initialize.h"
#include "_coder_qr_preconditioner_mex.h"
#include "qr_preconditioner_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void qr_preconditioner_once(void);

/* Function Definitions */
static void qr_preconditioner_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void qr_preconditioner_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    qr_preconditioner_once();
  }
}

/* End of code generation (qr_preconditioner_initialize.c) */
