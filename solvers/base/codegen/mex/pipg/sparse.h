/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse.h
 *
 * Code generation for function 'sparse'
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
int32_T sparse(const emlrtStack *sp, const emxArray_real_T *varargin_1,
               const emxArray_real_T *varargin_2, const real_T varargin_3[298],
               real_T varargin_4, real_T varargin_5, emxArray_real_T *y_d,
               emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx,
               int32_T *y_n);

/* End of code generation (sparse.h) */
