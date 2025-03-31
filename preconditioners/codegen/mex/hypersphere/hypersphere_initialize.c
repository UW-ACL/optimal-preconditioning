/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere_initialize.c
 *
 * Code generation for function 'hypersphere_initialize'
 *
 */

/* Include files */
#include "hypersphere_initialize.h"
#include "_coder_hypersphere_mex.h"
#include "hypersphere_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void hypersphere_once(void);

/* Function Definitions */
static void hypersphere_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void hypersphere_initialize(void)
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
    hypersphere_once();
  }
}

/* End of code generation (hypersphere_initialize.c) */
