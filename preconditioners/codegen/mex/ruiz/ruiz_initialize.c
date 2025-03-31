/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ruiz_initialize.c
 *
 * Code generation for function 'ruiz_initialize'
 *
 */

/* Include files */
#include "ruiz_initialize.h"
#include "_coder_ruiz_mex.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "timeKeeper.h"

/* Function Declarations */
static void ruiz_once(void);

/* Function Definitions */
static void ruiz_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void ruiz_initialize(void)
{
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
    ruiz_once();
  }
}

/* End of code generation (ruiz_initialize.c) */
