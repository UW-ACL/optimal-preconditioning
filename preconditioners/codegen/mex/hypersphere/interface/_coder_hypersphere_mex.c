/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hypersphere_mex.c
 *
 * Code generation for function '_coder_hypersphere_mex'
 *
 */

/* Include files */
#include "_coder_hypersphere_mex.h"
#include "_coder_hypersphere_api.h"
#include "hypersphere_data.h"
#include "hypersphere_initialize.h"
#include "hypersphere_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hypersphere_mexFunction(int32_T nlhs, mxArray *plhs[11], int32_T nrhs,
                             const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[11];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        11, "hypersphere");
  }
  if (nlhs > 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "hypersphere");
  }
  /* Call the function. */
  hypersphere_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&hypersphere_atexit);
  /* Module initialization. */
  hypersphere_initialize();
  /* Dispatch the entry-point. */
  hypersphere_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  hypersphere_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_hypersphere_mex.c) */
