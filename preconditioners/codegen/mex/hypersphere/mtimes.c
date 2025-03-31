/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI = {
    35,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    216,        /* lineNo */
    "sfmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    241,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    252,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    258,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    33,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    49,         /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    50,         /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    74,         /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    86,         /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    98,         /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    118,        /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    120,        /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    124,        /* lineNo */
    "ssmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    290,                 /* lineNo */
    "countNnzInProduct", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    300,                 /* lineNo */
    9,                   /* colNo */
    "countNnzInProduct", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    275,      /* lineNo */
    1,        /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pName */
};

/* Function Definitions */
void b_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx,
                     const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, b_sparse *c)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T wd[196];
  const real_T *a_d_data;
  const real_T *b_d_data;
  int32_T flag[196];
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T a_tmp;
  int32_T bcidx;
  int32_T blen_tmp;
  int32_T cmax;
  int32_T cnnz;
  int32_T cstart;
  int32_T i;
  int32_T j;
  int32_T pa;
  int32_T paend_tmp;
  int32_T pb;
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
  b_d_data = b_d->data;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &jc_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  i = c->colidx->size[0];
  c->colidx->size[0] = b_colidx->size[0];
  emxEnsureCapacity_int32_T(&b_st, c->colidx, i, &cb_emlrtRTEI);
  bcidx = b_colidx->size[0];
  for (i = 0; i < bcidx; i++) {
    c->colidx->data[i] = 0;
  }
  memset(&flag[0], 0, 196U * sizeof(int32_T));
  cnnz = 0;
  j = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (j < 298) {
      bcidx = b_colidx_data[j] - 1;
      cstart = cnnz;
      cmax = cnnz + 196;
      c->colidx->data[j] = cnnz + 1;
      while ((bcidx + 1 < b_colidx_data[j + 1]) && (cnnz <= cmax)) {
        paend_tmp = a_colidx_data[b_rowidx_data[bcidx]] - 1;
        a_tmp = a_colidx_data[b_rowidx_data[bcidx] - 1];
        c_st.site = &sc_emlrtRSI;
        if ((a_tmp <= paend_tmp) && (paend_tmp > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (blen_tmp = a_tmp; blen_tmp <= paend_tmp; blen_tmp++) {
          i = a_rowidx_data[blen_tmp - 1] - 1;
          if (flag[i] != j + 1) {
            flag[i] = j + 1;
            cnnz++;
          }
        }
        bcidx++;
      }
      if (cnnz < cstart) {
        emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        j++;
      }
    } else {
      c->colidx->data[298] = cnnz + 1;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  b_st.site = &lc_emlrtRSI;
  if (cnnz < 1) {
    cnnz = 1;
  }
  c->maxnz = cnnz;
  i = c->d->size[0];
  c->d->size[0] = cnnz;
  emxEnsureCapacity_real_T(&b_st, c->d, i, &q_emlrtRTEI);
  i = c->rowidx->size[0];
  c->rowidx->size[0] = cnnz;
  emxEnsureCapacity_int32_T(&b_st, c->rowidx, i, &r_emlrtRTEI);
  memset(&flag[0], 0, 196U * sizeof(int32_T));
  pb = 0;
  cnnz = -1;
  for (j = 0; j < 298; j++) {
    int32_T pcstart;
    boolean_T needSort;
    needSort = false;
    pcstart = cnnz + 2;
    blen_tmp = b_colidx_data[j + 1];
    bcidx = (blen_tmp - pb) - 1;
    if (bcidx != 0) {
      if (bcidx == 1) {
        cmax = a_colidx_data[b_rowidx_data[pb]];
        paend_tmp = cmax - 1;
        a_tmp = a_colidx_data[b_rowidx_data[pb] - 1];
        b_st.site = &mc_emlrtRSI;
        if ((a_tmp <= cmax - 1) && (cmax - 1 > 2147483646)) {
          c_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (pa = a_tmp; pa <= paend_tmp; pa++) {
          i = a_rowidx_data[pa - 1];
          c->rowidx->data[((cnnz + pa) - a_tmp) + 1] = i;
          wd[i - 1] = a_d_data[pa - 1] * b_d_data[pb];
        }
        cnnz = (cnnz + cmax) - a_tmp;
        pb++;
      } else {
        cmax = a_colidx_data[b_rowidx_data[pb]];
        paend_tmp = cmax - 1;
        a_tmp = a_colidx_data[b_rowidx_data[pb] - 1];
        b_st.site = &nc_emlrtRSI;
        if ((a_tmp <= cmax - 1) && (cmax - 1 > 2147483646)) {
          c_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (pa = a_tmp; pa <= paend_tmp; pa++) {
          bcidx = a_rowidx_data[pa - 1];
          cstart = (cnnz + pa) - a_tmp;
          flag[bcidx - 1] = cstart + 2;
          c->rowidx->data[cstart + 1] = bcidx;
          wd[bcidx - 1] = a_d_data[pa - 1] * b_d_data[pb];
        }
        cnnz = (cnnz + cmax) - a_tmp;
        for (pb++; pb + 1 < blen_tmp; pb++) {
          real_T bd;
          bd = b_d_data[pb];
          paend_tmp = a_colidx_data[b_rowidx_data[pb]] - 1;
          a_tmp = a_colidx_data[b_rowidx_data[pb] - 1];
          b_st.site = &oc_emlrtRSI;
          if ((a_tmp <= paend_tmp) && (paend_tmp > 2147483646)) {
            c_st.site = &db_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }
          for (pa = a_tmp; pa <= paend_tmp; pa++) {
            i = a_rowidx_data[pa - 1];
            if (flag[i - 1] < pcstart) {
              cnnz++;
              flag[i - 1] = cnnz + 1;
              c->rowidx->data[cnnz] = i;
              wd[i - 1] = a_d_data[pa - 1] * bd;
              needSort = true;
            } else {
              wd[i - 1] += a_d_data[pa - 1] * bd;
            }
          }
        }
      }
    }
    bcidx = c->colidx->data[j + 1] - 1;
    pcstart = c->colidx->data[j];
    if (needSort) {
      b_st.site = &pc_emlrtRSI;
      b_introsort(&b_st, c->rowidx, c->colidx->data[j], bcidx);
    }
    b_st.site = &qc_emlrtRSI;
    if ((c->colidx->data[j] <= bcidx) && (bcidx > 2147483646)) {
      c_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (cstart = pcstart; cstart <= bcidx; cstart++) {
      c->d->data[cstart - 1] = wd[c->rowidx->data[cstart - 1] - 1];
    }
  }
  b_st.site = &rc_emlrtRSI;
  b_sparse_fillIn(c);
}

void c_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx, const real_T b[196],
                     real_T c[196])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &ec_emlrtRSI;
  memset(&c[0], 0, 196U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &fc_emlrtRSI;
    for (acol = 0; acol < 196; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &gc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &hc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &ic_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

void d_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx, const real_T b[196],
                     real_T c[298])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &ec_emlrtRSI;
  memset(&c[0], 0, 298U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &fc_emlrtRSI;
    for (acol = 0; acol < 196; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &gc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &hc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &ic_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

void e_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx, const real_T b[298],
                     real_T c[196])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &ec_emlrtRSI;
  memset(&c[0], 0, 196U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &fc_emlrtRSI;
    for (acol = 0; acol < 298; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &gc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &hc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &ic_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

void sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                   const emxArray_int32_T *a_colidx,
                   const emxArray_int32_T *a_rowidx, const real_T b[298],
                   real_T c[298])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &ec_emlrtRSI;
  memset(&c[0], 0, 298U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &fc_emlrtRSI;
    for (acol = 0; acol < 298; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &gc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &hc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &ic_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

/* End of code generation (mtimes.c) */
