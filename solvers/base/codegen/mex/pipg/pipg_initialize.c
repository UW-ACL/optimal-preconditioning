/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pipg_initialize.c
 *
 * Code generation for function 'pipg_initialize'
 *
 */

/* Include files */
#include "pipg_initialize.h"
#include "_coder_pipg_mex.h"
#include "pipg_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include <string.h>

/* Function Declarations */
static void pipg_once(void);

/* Function Definitions */
static void pipg_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void pipg_initialize(void)
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
    pipg_once();
  }
}

/* End of code generation (pipg_initialize.c) */
