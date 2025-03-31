/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power_iteration_types.h
 *
 * Code generation for function 'power_iteration'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T eps_abs_cots;
  real_T eps_rel_cots;
  real_T eps_abs_pipg;
  real_T eps_rel_pipg;
  real_T percent_rel_err;
  real_T omg;
  real_T rho_extrap;
  real_T max_iters;
  char_T termination[12];
  real_T check_every;
  real_T eps_abs_power;
  real_T eps_rel_power;
  real_T eps_buff_power;
  real_T max_iters_power;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_b_power_iteration
#define typedef_b_power_iteration
typedef struct {
  real_T y[58408];
} b_power_iteration;
#endif /* typedef_b_power_iteration */

#ifndef typedef_power_iterationStackData
#define typedef_power_iterationStackData
typedef struct {
  b_power_iteration f0;
} power_iterationStackData;
#endif /* typedef_power_iterationStackData */

/* End of code generation (power_iteration_types.h) */
