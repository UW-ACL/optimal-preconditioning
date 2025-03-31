/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ruiz_mex.c
 *
 * Code generation for function '_coder_ruiz_mex'
 *
 */

/* Include files */
#include "_coder_ruiz_mex.h"
#include "_coder_ruiz_api.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_initialize.h"
#include "ruiz_terminate.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&ruiz_atexit);
  /* Module initialization. */
  ruiz_initialize();
  /* Dispatch the entry-point. */
  ruiz_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  ruiz_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void ruiz_mexFunction(int32_T nlhs, mxArray *plhs[9], int32_T nrhs,
                      const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[9];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        4, "ruiz");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "ruiz");
  }
  /* Call the function. */
  ruiz_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_ruiz_mex.c) */
