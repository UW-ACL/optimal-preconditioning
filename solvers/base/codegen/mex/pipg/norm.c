/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "norm.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Function Definitions */
real_T b_norm(const emxArray_real_T *x)
{
  const real_T *x_data;
  real_T y;
  int32_T k;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    int32_T i;
    y = 0.0;
    i = x->size[0];
    for (k = 0; k < i; k++) {
      real_T absx;
      absx = muDoubleScalarAbs(x_data[k]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }
  }
  return y;
}

/* End of code generation (norm.c) */
