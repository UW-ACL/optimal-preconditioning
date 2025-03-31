/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_qr_preconditioner_mex.c
 *
 * Code generation for function '_coder_qr_preconditioner_mex'
 *
 */

/* Include files */
#include "_coder_qr_preconditioner_mex.h"
#include "_coder_qr_preconditioner_api.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_initialize.h"
#include "qr_preconditioner_terminate.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  qr_preconditionerStackData *c_qr_preconditionerStackDataGlo = NULL;
  c_qr_preconditionerStackDataGlo = (qr_preconditionerStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(qr_preconditionerStackData));
  mexAtExit(&qr_preconditioner_atexit);
  /* Module initialization. */
  qr_preconditioner_initialize();
  /* Dispatch the entry-point. */
  qr_preconditioner_mexFunction(c_qr_preconditionerStackDataGlo, nlhs, plhs,
                                nrhs, prhs);
  /* Module termination. */
  qr_preconditioner_terminate();
  emlrtMxFree(c_qr_preconditionerStackDataGlo);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void qr_preconditioner_mexFunction(qr_preconditionerStackData *SD, int32_T nlhs,
                                   mxArray *plhs[8], int32_T nrhs,
                                   const mxArray *prhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[8];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        17, "qr_preconditioner");
  }
  if (nlhs > 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "qr_preconditioner");
  }
  /* Call the function. */
  qr_preconditioner_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_qr_preconditioner_mex.c) */
