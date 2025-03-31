/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * locBsearch.h
 *
 * Code generation for function 'locBsearch'
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
int32_T sparse_locBsearch(const emxArray_int32_T *x, int32_T xi, int32_T xstart,
                          int32_T xend, boolean_T *found);

/* End of code generation (locBsearch.h) */
