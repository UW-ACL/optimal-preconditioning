/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power_iteration.h
 *
 * Code generation for function 'power_iteration'
 *
 */

#pragma once

/* Include files */
#include "power_iteration_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void power_iteration(power_iterationStackData *SD, const real_T H[58408],
                     const struct0_T *s, real_T *sigma_max, real_T *k,
                     real_T *power_iteration_time);

/* End of code generation (power_iteration.h) */
