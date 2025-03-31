/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power_iteration.c
 *
 * Code generation for function 'power_iteration'
 *
 */

/* Include files */
#include "power_iteration.h"
#include "power_iteration_types.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Function Definitions */
void power_iteration(power_iterationStackData *SD, const real_T H[58408],
                     const struct0_T *s, real_T *sigma_max, real_T *k,
                     real_T *power_iteration_time)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T z[298];
  real_T w[196];
  real_T scale;
  real_T sigma;
  real_T t;
  int32_T b_k;
  int32_T c_k;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  /* POWER_ITERATION */
  /*    [SIGMA_MAX, K, POWER_ITERATION_TIME] = POWER_ITERATION(H, S) */
  tic();
  sigma = 0.0;
  scale = 3.3121686421112381E-170;
  for (b_k = 0; b_k < 196; b_k++) {
    w[b_k] = 0.071428571428571425;
    if (scale < 0.071428571428571425) {
      t = scale / 0.071428571428571425;
      sigma = sigma * t * t + 1.0;
      scale = 0.071428571428571425;
    } else {
      sigma++;
    }
  }
  sigma = scale * muDoubleScalarSqrt(sigma);
  *k = 1.0;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= (int32_T)s->max_iters_power - 1)) {
    real_T sigma_km1;
    *k = (real_T)b_k + 1.0;
    sigma_km1 = sigma;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    scale = 1.0;
    t = 0.0;
    m_t = (ptrdiff_t)298;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)196;
    lda_t = (ptrdiff_t)196;
    ldb_t = (ptrdiff_t)196;
    ldc_t = (ptrdiff_t)298;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &scale, (real_T *)&H[0], &lda_t,
          &w[0], &ldb_t, &t, &z[0], &ldc_t);
    scale = 1.0 / sigma;
    for (c_k = 0; c_k < 58408; c_k++) {
      SD->f0.y[c_k] = scale * H[c_k];
    }
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    scale = 1.0;
    t = 0.0;
    m_t = (ptrdiff_t)196;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)298;
    lda_t = (ptrdiff_t)196;
    ldb_t = (ptrdiff_t)298;
    ldc_t = (ptrdiff_t)196;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &scale, &SD->f0.y[0], &lda_t,
          &z[0], &ldb_t, &t, &w[0], &ldc_t);
    sigma = 0.0;
    scale = 3.3121686421112381E-170;
    for (c_k = 0; c_k < 196; c_k++) {
      real_T absxk;
      absxk = muDoubleScalarAbs(w[c_k]);
      if (absxk > scale) {
        t = scale / absxk;
        sigma = sigma * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        sigma += t * t;
      }
    }
    sigma = scale * muDoubleScalarSqrt(sigma);
    if (muDoubleScalarAbs(sigma - sigma_km1) <=
        s->eps_abs_power +
            s->eps_rel_power * muDoubleScalarMax(sigma, sigma_km1)) {
      exitg1 = true;
    } else {
      b_k++;
    }
  }
  *sigma_max = (s->eps_buff_power + 1.0) * sigma;
  *power_iteration_time = 1000.0 * toc();
}

/* End of code generation (power_iteration.c) */
