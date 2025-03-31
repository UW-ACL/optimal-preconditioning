/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * speye.h
 *
 * Code generation for function 'speye'
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
int32_T speye(const emlrtStack *sp, real_T m, emxArray_real_T *y_d,
              emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx,
              int32_T *y_n);

/* End of code generation (speye.h) */
