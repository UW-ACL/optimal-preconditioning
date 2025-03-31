/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * heapsort.h
 *
 * Code generation for function 'heapsort'
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
void b_heapsort(const emlrtStack *sp, int32_T x[494], int32_T xstart,
                int32_T xend);

void c_heapsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                int32_T xend);

/* End of code generation (heapsort.h) */
