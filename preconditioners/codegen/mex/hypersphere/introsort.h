/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * introsort.h
 *
 * Code generation for function 'introsort'
 *
 */

#pragma once

/* Include files */
#include "hypersphere_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_introsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                 int32_T xend);

void c_introsort(const emlrtStack *sp, int32_T x[196]);

void introsort(const emlrtStack *sp, int32_T x[298]);

/* End of code generation (introsort.h) */
