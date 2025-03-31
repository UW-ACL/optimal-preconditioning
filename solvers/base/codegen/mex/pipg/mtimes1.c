/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes1.c
 *
 * Code generation for function 'mtimes1'
 *
 */

/* Include files */
#include "mtimes1.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>
#include <string.h>

/* Function Definitions */
void b_mtimes(const real_T A[58408], const emxArray_real_T *B, real_T C[196])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  B_data = B->data;
  if (B->size[0] == 0) {
    memset(&C[0], 0, 196U * sizeof(real_T));
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)196;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)298;
    lda_t = (ptrdiff_t)196;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)196;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

void mtimes(const real_T A[58408], const emxArray_real_T *B, real_T C[298])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  B_data = B->data;
  if (B->size[0] == 0) {
    memset(&C[0], 0, 298U * sizeof(real_T));
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)298;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)196;
    lda_t = (ptrdiff_t)196;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)298;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

/* End of code generation (mtimes1.c) */
