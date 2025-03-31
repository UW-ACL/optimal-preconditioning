/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pipg_mex.c
 *
 * Code generation for function '_coder_pipg_mex'
 *
 */

/* Include files */
#include "_coder_pipg_mex.h"
#include "_coder_pipg_api.h"
#include "pipg_data.h"
#include "pipg_initialize.h"
#include "pipg_terminate.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&pipg_atexit);
  /* Module initialization. */
  pipg_initialize();
  /* Dispatch the entry-point. */
  pipg_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  pipg_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void pipg_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                      const mxArray *prhs[11])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 11, 4,
                        4, "pipg");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "pipg");
  }
  /* Call the function. */
  pipg_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_pipg_mex.c) */
