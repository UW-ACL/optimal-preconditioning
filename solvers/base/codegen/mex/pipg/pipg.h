/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pipg.h
 *
 * Code generation for function 'pipg'
 *
 */

#pragma once

/* Include files */
#include "pipg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void pipg(const emlrtStack *sp, const b_sparse P, const real_T q[298],
          const real_T H[58408], const real_T h[196], real_T c,
          const b_sparse D, real_T sigma_max, const real_T ground_truth[298],
          const struct0_T *p, const struct1_T *s, real_T z_opt[298],
          emxArray_real_T *w_opt, real_T *k, real_T *pipg_time);

/* End of code generation (pipg.h) */
