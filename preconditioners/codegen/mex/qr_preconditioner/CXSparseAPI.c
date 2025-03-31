/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CXSparseAPI.c
 *
 * Code generation for function 'CXSparseAPI'
 *
 */

/* Include files */
#include "CXSparseAPI.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_emxutil.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "cs.h"
#include "makeCXSparseMatrix.h"
#include "mwmathutil.h"
#include "solve_from_qr.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = {
    357,                      /* lineNo */
    "CXSparseAPI/iteratedQR", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    386,                      /* lineNo */
    "CXSparseAPI/iteratedQR", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    416,                      /* lineNo */
    "CXSparseAPI/iteratedQR", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    423,                      /* lineNo */
    "CXSparseAPI/iteratedQR", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    423,           /* lineNo */
    17,            /* colNo */
    "CXSparseAPI", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    416,           /* lineNo */
    49,            /* colNo */
    "CXSparseAPI", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pName */
};

/* Function Definitions */
int32_T CXSparseAPI_iteratedQR(const emlrtStack *sp, const emxArray_real_T *A_d,
                               const emxArray_int32_T *A_colidx,
                               const emxArray_int32_T *A_rowidx,
                               const emxArray_int32_T *b_colidx,
                               const emxArray_int32_T *b_rowidx,
                               emxArray_real_T *out_d,
                               emxArray_int32_T *out_colidx,
                               emxArray_int32_T *out_rowidx)
{
  cs_di *cxA;
  cs_din *N;
  cs_dis *S;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *rowidxt;
  emxArray_int32_T *s_rowidx;
  emxArray_real_T *dt;
  real_T outBuff[196];
  const real_T *A_d_data;
  real_T tol;
  real_T *dt_data;
  real_T *out_d_data;
  const int32_T *A_colidx_data;
  const int32_T *A_rowidx_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T i;
  int32_T k;
  int32_T nzRhs;
  int32_T nz_tmp;
  int32_T out_maxnz;
  int32_T *out_colidx_data;
  int32_T *out_rowidx_data;
  int32_T *rowidxt_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  A_rowidx_data = A_rowidx->data;
  A_colidx_data = A_colidx->data;
  A_d_data = A_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &bd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  cxA = makeCXSparseMatrix(A_colidx_data[A_colidx->size[0] - 1] - 1, 196, 196,
                           &A_colidx_data[0], &A_rowidx_data[0], &A_d_data[0]);
  S = cs_di_sqr(2, cxA, 1);
  N = cs_di_qr(cxA, S);
  cs_di_spfree(cxA);
  qr_rank_di(N, &tol);
  st.site = &cd_emlrtRSI;
  out_maxnz = b_sparse_spallocLike(&st, out_d, out_colidx, out_rowidx);
  out_rowidx_data = out_rowidx->data;
  out_colidx_data = out_colidx->data;
  out_d_data = out_d->data;
  emxInit_int32_T(sp, &s_rowidx, &gb_emlrtRTEI);
  emxInit_int32_T(sp, &rowidxt, &bb_emlrtRTEI);
  emxInit_real_T(sp, &dt, 1, &cb_emlrtRTEI);
  for (i = 0; i < 196; i++) {
    int32_T cend;
    int32_T nz;
    int32_T nzColAlloc_tmp;
    st.site = &dd_emlrtRSI;
    b_st.site = &fd_emlrtRSI;
    c_st.site = &gd_emlrtRSI;
    cend = b_colidx_data[i + 1] - b_colidx_data[i];
    d_st.site = &hd_emlrtRSI;
    sparse_spallocLike(&d_st, cend, dt, rowidxt, s_rowidx);
    s_rowidx_data = s_rowidx->data;
    rowidxt_data = rowidxt->data;
    dt_data = dt->data;
    if (cend != 0) {
      for (k = 0; k < cend; k++) {
        dt_data[k] = 1.0;
        s_rowidx_data[k] = b_rowidx_data[(b_colidx_data[i] + k) - 1];
      }
      rowidxt_data[1] = rowidxt_data[0] + cend;
    }
    memset(&outBuff[0], 0, 196U * sizeof(real_T));
    cend = rowidxt_data[1] - 1;
    nz_tmp = rowidxt_data[0];
    for (nzRhs = nz_tmp; nzRhs <= cend; nzRhs++) {
      outBuff[s_rowidx_data[nzRhs - 1] - 1] = dt_data[nzRhs - 1];
    }
    solve_from_qr_di(N, S, (double *)&outBuff[0], 196, 196);
    st.site = &ed_emlrtRSI;
    b_st.site = &jd_emlrtRSI;
    c_st.site = &kd_emlrtRSI;
    nz_tmp = out_colidx_data[out_colidx->size[0] - 1];
    nz = nz_tmp - 1;
    nzColAlloc_tmp = out_colidx_data[i + 1];
    cend = nzColAlloc_tmp - out_colidx_data[i];
    nzRhs = 0;
    for (k = 0; k < 196; k++) {
      if (!(outBuff[k] == 0.0)) {
        nzRhs++;
      }
    }
    if (cend < nzRhs) {
      int32_T extraCol;
      extraCol = nzRhs - cend;
      cend = (out_maxnz - nz_tmp) + 1;
      if (cend < extraCol) {
        int32_T outIdx;
        cend = (out_maxnz + extraCol) - cend;
        outIdx = out_colidx_data[i];
        nz_tmp = rowidxt->size[0];
        rowidxt->size[0] = out_rowidx->size[0];
        emxEnsureCapacity_int32_T(&c_st, rowidxt, nz_tmp, &bb_emlrtRTEI);
        rowidxt_data = rowidxt->data;
        nzRhs = out_rowidx->size[0];
        for (nz_tmp = 0; nz_tmp < nzRhs; nz_tmp++) {
          rowidxt_data[nz_tmp] = out_rowidx_data[nz_tmp];
        }
        nz_tmp = dt->size[0];
        dt->size[0] = out_d->size[0];
        emxEnsureCapacity_real_T(&c_st, dt, nz_tmp, &cb_emlrtRTEI);
        dt_data = dt->data;
        nzRhs = out_d->size[0];
        for (nz_tmp = 0; nz_tmp < nzRhs; nz_tmp++) {
          dt_data[nz_tmp] = out_d_data[nz_tmp];
        }
        cend = muIntScalarMin_sint32(cend, 38416);
        if (cend <= 1) {
          out_maxnz = 1;
        } else {
          out_maxnz = cend;
        }
        nz_tmp = out_rowidx->size[0];
        out_rowidx->size[0] = out_maxnz;
        emxEnsureCapacity_int32_T(&c_st, out_rowidx, nz_tmp, &fb_emlrtRTEI);
        out_rowidx_data = out_rowidx->data;
        nz_tmp = out_d->size[0];
        out_d->size[0] = out_maxnz;
        emxEnsureCapacity_real_T(&c_st, out_d, nz_tmp, &fb_emlrtRTEI);
        out_d_data = out_d->data;
        for (nz_tmp = 0; nz_tmp < out_maxnz; nz_tmp++) {
          out_rowidx_data[nz_tmp] = 0;
          out_d_data[nz_tmp] = 0.0;
        }
        for (k = 0; k <= outIdx - 2; k++) {
          out_rowidx_data[k] = rowidxt_data[k];
          out_d_data[k] = dt_data[k];
        }
        for (k = nzColAlloc_tmp; k <= nz; k++) {
          cend = (k + extraCol) - 1;
          out_rowidx_data[cend] = rowidxt_data[k - 1];
          out_d_data[cend] = dt_data[k - 1];
        }
      } else {
        cend = (nzColAlloc_tmp + extraCol) - 1;
        nzRhs = nz_tmp - nzColAlloc_tmp;
        if (nzRhs > 0) {
          memmove((void *)&out_rowidx_data[cend],
                  (void *)&out_rowidx_data[nzColAlloc_tmp - 1],
                  (uint32_T)((size_t)nzRhs * sizeof(int32_T)));
          memmove((void *)&out_d_data[cend],
                  (void *)&out_d_data[nzColAlloc_tmp - 1],
                  (uint32_T)((size_t)nzRhs * sizeof(real_T)));
        }
      }
      cend = out_colidx_data[i] - 1;
      for (k = 0; k < 196; k++) {
        tol = outBuff[k];
        if (tol != 0.0) {
          out_rowidx_data[cend] = k + 1;
          out_d_data[cend] = tol;
          cend++;
        }
      }
      nz_tmp = i + 2;
      for (k = nz_tmp; k < 198; k++) {
        out_colidx_data[k - 1] += extraCol;
      }
    } else {
      int32_T outIdx;
      outIdx = out_colidx_data[i] - 1;
      for (k = 0; k < 196; k++) {
        tol = outBuff[k];
        if (tol != 0.0) {
          out_rowidx_data[outIdx] = k + 1;
          out_d_data[outIdx] = tol;
          outIdx++;
        }
      }
      cend -= nzRhs;
      if (cend > 0) {
        nzRhs = nz_tmp - nzColAlloc_tmp;
        if (nzRhs > 0) {
          memmove((void *)&out_rowidx_data[outIdx],
                  (void *)&out_rowidx_data[nzColAlloc_tmp - 1],
                  (uint32_T)((size_t)nzRhs * sizeof(int32_T)));
          memmove((void *)&out_d_data[outIdx],
                  (void *)&out_d_data[nzColAlloc_tmp - 1],
                  (uint32_T)((size_t)nzRhs * sizeof(real_T)));
        }
        nz_tmp = i + 2;
        for (k = nz_tmp; k < 198; k++) {
          out_colidx_data[k - 1] -= cend;
        }
      }
    }
  }
  emxFree_real_T(sp, &dt);
  emxFree_int32_T(sp, &rowidxt);
  emxFree_int32_T(sp, &s_rowidx);
  cs_di_sfree(S);
  cs_di_nfree(N);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return out_maxnz;
}

/* End of code generation (CXSparseAPI.c) */
