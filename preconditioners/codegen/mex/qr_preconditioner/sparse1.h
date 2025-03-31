/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse1.h
 *
 * Code generation for function 'sparse1'
 *
 */

#pragma once

/* Include files */
#include "qr_preconditioner_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void sparse(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *y_d,
            emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx);

/* End of code generation (sparse1.h) */
