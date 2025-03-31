/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.h
 *
 * Code generation for function 'diag'
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
void sparse_diag(const emlrtStack *sp, const emxArray_real_T *this_d,
                 const emxArray_int32_T *this_colidx,
                 const emxArray_int32_T *this_rowidx, emxArray_real_T *y_d,
                 emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx);

/* End of code generation (diag.h) */
