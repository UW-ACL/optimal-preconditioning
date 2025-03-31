/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_power_iteration_mex.c
 *
 * Code generation for function '_coder_power_iteration_mex'
 *
 */

/* Include files */
#include "_coder_power_iteration_mex.h"
#include "_coder_power_iteration_api.h"
#include "power_iteration_data.h"
#include "power_iteration_initialize.h"
#include "power_iteration_terminate.h"
#include "power_iteration_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  power_iterationStackData *power_iterationStackDataGlobal = NULL;
  power_iterationStackDataGlobal = (power_iterationStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(power_iterationStackData));
  mexAtExit(&power_iteration_atexit);
  /* Module initialization. */
  power_iteration_initialize();
  /* Dispatch the entry-point. */
  unsafe_power_iteration_mexFunction(power_iterationStackDataGlobal, nlhs, plhs,
                                     nrhs, prhs);
  /* Module termination. */
  power_iteration_terminate();
  emlrtMxFree(power_iterationStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void unsafe_power_iteration_mexFunction(power_iterationStackData *SD,
                                        int32_T nlhs, mxArray *plhs[3],
                                        int32_T nrhs, const mxArray *prhs[2])
{
  const mxArray *outputs[3];
  int32_T i;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 2, 4, 15, "power_iteration");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "power_iteration");
  }
  /* Call the function. */
  power_iteration_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_power_iteration_mex.c) */
