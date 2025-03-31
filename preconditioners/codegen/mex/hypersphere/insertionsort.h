/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * insertionsort.h
 *
 * Code generation for function 'insertionsort'
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
void b_insertionsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                     int32_T xend);

void c_insertionsort(const emlrtStack *sp, int32_T x[196], int32_T xstart,
                     int32_T xend);

void insertionsort(const emlrtStack *sp, int32_T x[298], int32_T xstart,
                   int32_T xend);

/* End of code generation (insertionsort.h) */
