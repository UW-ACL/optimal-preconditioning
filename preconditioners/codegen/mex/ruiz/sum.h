/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "ruiz_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void sum(const emlrtStack *sp, const emxArray_real_T *x_d,
         const emxArray_int32_T *x_colidx, emxArray_real_T *y_d,
         emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx);

/* End of code generation (sum.h) */
