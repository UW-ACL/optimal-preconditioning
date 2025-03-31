/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse.c
 *
 * Code generation for function 'sparse'
 *
 */

/* Include files */
#include "sparse.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "locBsearch.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = {
    391,                /* lineNo */
    "sparse/transpose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    24,                    /* lineNo */
    "sparse/locTranspose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/locTranspose.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    17,                    /* lineNo */
    "sparse/locTranspose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/locTranspose.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    25,                        /* lineNo */
    "sparse/parenReference2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    36,                        /* lineNo */
    "parenReference2DNumeric", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    302,            /* lineNo */
    "sparse/times", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    194,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    204,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    206,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo
    wd_emlrtRSI =
        {
            18,      /* lineNo */
            "spfun", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "spfun.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    462,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    465,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    468,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI = {
    437,           /* lineNo */
    "scalarBinOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    178,             /* lineNo */
    39,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    460,                /* lineNo */
    34,                 /* colNo */
    "sparse/spfunImpl", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    391,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    1482,     /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    250,      /* lineNo */
    17,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    240,      /* lineNo */
    22,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    203,     /* lineNo */
    9,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    459,      /* lineNo */
    12,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    302,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    125,     /* lineNo */
    5,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

/* Function Definitions */
int32_T b_sparse_parenReference(const emlrtStack *sp,
                                const emxArray_real_T *this_d,
                                const emxArray_int32_T *this_colidx,
                                const emxArray_int32_T *this_rowidx,
                                emxArray_real_T *s_d,
                                emxArray_int32_T *s_colidx,
                                emxArray_int32_T *s_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *s_d_data;
  const int32_T *this_colidx_data;
  int32_T cidx;
  int32_T colNnz;
  int32_T i;
  int32_T k;
  int32_T ridx;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  boolean_T found;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &vb_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  s_d->size[0] = 0;
  s_rowidx->size[0] = 0;
  i = s_colidx->size[0];
  s_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &fb_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  for (i = 0; i < 197; i++) {
    s_colidx_data[i] = 0;
  }
  s_colidx_data[0] = 1;
  colNnz = 1;
  k = 0;
  for (cidx = 0; cidx < 196; cidx++) {
    for (ridx = 0; ridx < 196; ridx++) {
      int32_T idx;
      idx = sparse_locBsearch(this_rowidx, ridx + 299,
                              this_colidx_data[cidx + 298],
                              this_colidx_data[cidx + 299], &found);
      if (found) {
        real_T s_d_tmp;
        int32_T i1;
        i = s_d->size[0];
        i1 = s_d->size[0];
        s_d->size[0]++;
        emxEnsureCapacity_real_T(&c_st, s_d, i1, &gb_emlrtRTEI);
        s_d_data = s_d->data;
        s_d_tmp = this_d_data[idx - 1];
        s_d_data[i] = s_d_tmp;
        i = s_rowidx->size[0];
        i1 = s_rowidx->size[0];
        s_rowidx->size[0]++;
        emxEnsureCapacity_int32_T(&c_st, s_rowidx, i1, &gb_emlrtRTEI);
        s_rowidx_data = s_rowidx->data;
        s_rowidx_data[i] = ridx + 1;
        s_d_data[k] = s_d_tmp;
        s_rowidx_data[k] = ridx + 1;
        k++;
        colNnz++;
      }
    }
    s_colidx_data[cidx + 1] = colNnz;
  }
  if (s_colidx_data[196] - 1 == 0) {
    i = s_rowidx->size[0];
    s_rowidx->size[0] = 1;
    emxEnsureCapacity_int32_T(&c_st, s_rowidx, i, &fb_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    s_rowidx_data[0] = 1;
    i = s_d->size[0];
    s_d->size[0] = 1;
    emxEnsureCapacity_real_T(&c_st, s_d, i, &fb_emlrtRTEI);
    s_d_data = s_d->data;
    s_d_data[0] = 0.0;
  }
  i = s_colidx_data[196] - 1;
  return muIntScalarMax_sint32(i, 1);
}

void b_sparse_spallocLike(const emlrtStack *sp, int32_T nzmax,
                          emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                          emxArray_int32_T *s_rowidx)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *s_d_data;
  int32_T i;
  int32_T numalloc;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fb_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmax >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  i = s_d->size[0];
  s_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&st, s_d, i, &db_emlrtRTEI);
  s_d_data = s_d->data;
  i = s_colidx->size[0];
  s_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&st, s_colidx, i, &s_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  i = s_rowidx->size[0];
  s_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&st, s_rowidx, i, &db_emlrtRTEI);
  s_rowidx_data = s_rowidx->data;
  for (i = 0; i < numalloc; i++) {
    s_d_data[i] = 0.0;
    s_rowidx_data[i] = 0;
  }
  s_colidx_data[0] = 1;
  s_colidx_data[1] = 1;
}

int32_T sparse_parenReference(const emlrtStack *sp,
                              const emxArray_real_T *this_d,
                              const emxArray_int32_T *this_colidx,
                              const emxArray_int32_T *this_rowidx,
                              emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                              emxArray_int32_T *s_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *s_d_data;
  const int32_T *this_colidx_data;
  int32_T cidx;
  int32_T colNnz;
  int32_T i;
  int32_T k;
  int32_T ridx;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  boolean_T found;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &vb_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  s_d->size[0] = 0;
  s_rowidx->size[0] = 0;
  i = s_colidx->size[0];
  s_colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &fb_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  for (i = 0; i < 299; i++) {
    s_colidx_data[i] = 0;
  }
  s_colidx_data[0] = 1;
  colNnz = 1;
  k = 0;
  for (cidx = 0; cidx < 298; cidx++) {
    for (ridx = 0; ridx < 298; ridx++) {
      int32_T idx;
      idx = sparse_locBsearch(this_rowidx, ridx + 1, this_colidx_data[cidx],
                              this_colidx_data[cidx + 1], &found);
      if (found) {
        real_T s_d_tmp;
        int32_T i1;
        i = s_d->size[0];
        i1 = s_d->size[0];
        s_d->size[0]++;
        emxEnsureCapacity_real_T(&c_st, s_d, i1, &gb_emlrtRTEI);
        s_d_data = s_d->data;
        s_d_tmp = this_d_data[idx - 1];
        s_d_data[i] = s_d_tmp;
        i = s_rowidx->size[0];
        i1 = s_rowidx->size[0];
        s_rowidx->size[0]++;
        emxEnsureCapacity_int32_T(&c_st, s_rowidx, i1, &gb_emlrtRTEI);
        s_rowidx_data = s_rowidx->data;
        s_rowidx_data[i] = ridx + 1;
        s_d_data[k] = s_d_tmp;
        s_rowidx_data[k] = ridx + 1;
        k++;
        colNnz++;
      }
    }
    s_colidx_data[cidx + 1] = colNnz;
  }
  if (s_colidx_data[298] - 1 == 0) {
    i = s_rowidx->size[0];
    s_rowidx->size[0] = 1;
    emxEnsureCapacity_int32_T(&c_st, s_rowidx, i, &fb_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    s_rowidx_data[0] = 1;
    i = s_d->size[0];
    s_d->size[0] = 1;
    emxEnsureCapacity_real_T(&c_st, s_d, i, &fb_emlrtRTEI);
    s_d_data = s_d->data;
    s_d_data[0] = 0.0;
  }
  i = s_colidx_data[298] - 1;
  return muIntScalarMax_sint32(i, 1);
}

void sparse_spallocLike(const emlrtStack *sp, int32_T nzmax,
                        emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                        emxArray_int32_T *s_rowidx)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *s_d_data;
  int32_T i;
  int32_T numalloc;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fb_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmax >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  i = s_d->size[0];
  s_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&st, s_d, i, &db_emlrtRTEI);
  s_d_data = s_d->data;
  i = s_colidx->size[0];
  s_colidx->size[0] = 495;
  emxEnsureCapacity_int32_T(&st, s_colidx, i, &s_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  s_colidx_data[0] = 1;
  i = s_rowidx->size[0];
  s_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&st, s_rowidx, i, &db_emlrtRTEI);
  s_rowidx_data = s_rowidx->data;
  for (i = 0; i < numalloc; i++) {
    s_d_data[i] = 0.0;
    s_rowidx_data[i] = 0;
  }
  for (numalloc = 0; numalloc < 494; numalloc++) {
    s_colidx_data[numalloc + 1] = 1;
  }
  for (numalloc = 0; numalloc < 494; numalloc++) {
    s_colidx_data[numalloc] = 1;
  }
  s_colidx_data[494] = 1;
}

void sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                  const emxArray_int32_T *b_colidx,
                  const emxArray_int32_T *b_rowidx, sparse *s)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *S;
  const real_T *b_d_data;
  real_T *S_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T col;
  int32_T i;
  int32_T idx;
  int32_T numalloc;
  int32_T row;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  b_d_data = b_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &sd_emlrtRSI;
  if (a * 0.0 == 0.0) {
    b_st.site = &td_emlrtRSI;
    c_st.site = &wd_emlrtRSI;
    row = b_colidx_data[b_colidx->size[0] - 1];
    numalloc = row - 1;
    if (row - 1 < 1) {
      idx = 0;
    } else {
      idx = row - 1;
    }
    emxInit_real_T(&c_st, &S, 1, &jb_emlrtRTEI);
    i = S->size[0];
    S->size[0] = idx;
    emxEnsureCapacity_real_T(&c_st, S, i, &jb_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < idx; i++) {
      S_data[i] = a * b_d_data[i];
    }
    if (S->size[0] != row - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &xd_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    f_st.site = &fb_emlrtRSI;
    if (row - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &e_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (row - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (row - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &d_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    i = s->d->size[0];
    s->d->size[0] = numalloc;
    emxEnsureCapacity_real_T(&e_st, s->d, i, &kb_emlrtRTEI);
    s->maxnz = numalloc;
    i = s->colidx->size[0];
    s->colidx->size[0] = 299;
    emxEnsureCapacity_int32_T(&e_st, s->colidx, i, &s_emlrtRTEI);
    i = s->rowidx->size[0];
    s->rowidx->size[0] = numalloc;
    emxEnsureCapacity_int32_T(&e_st, s->rowidx, i, &kb_emlrtRTEI);
    for (i = 0; i < numalloc; i++) {
      s->d->data[i] = 0.0;
      s->rowidx->data[i] = 0;
    }
    for (numalloc = 0; numalloc < 298; numalloc++) {
      s->colidx->data[numalloc + 1] = 1;
    }
    for (numalloc = 0; numalloc < 298; numalloc++) {
      s->colidx->data[numalloc] = 1;
    }
    if (row - 1 < 1) {
      idx = 1;
    } else {
      idx = row;
    }
    for (i = 0; i <= idx - 2; i++) {
      s->rowidx->data[i] = b_rowidx_data[i];
    }
    i = s->colidx->size[0];
    s->colidx->size[0] = b_colidx->size[0];
    emxEnsureCapacity_int32_T(&c_st, s->colidx, i, &kb_emlrtRTEI);
    idx = b_colidx->size[0];
    for (i = 0; i < idx; i++) {
      s->colidx->data[i] = b_colidx_data[i];
    }
    d_st.site = &yd_emlrtRSI;
    if (row - 1 > 2147483646) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (idx = 0; idx <= row - 2; idx++) {
      s->d->data[idx] = S_data[idx];
    }
    emxFree_real_T(&c_st, &S);
    d_st.site = &ae_emlrtRSI;
    b_sparse_fillIn(s);
  } else {
    emxInit_real_T(&st, &S, 2, &lb_emlrtRTEI);
    i = S->size[0] * S->size[1];
    S->size[0] = 298;
    S->size[1] = 298;
    emxEnsureCapacity_real_T(&st, S, i, &ib_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < 88804; i++) {
      S_data[i] = rtNaN;
    }
    b_st.site = &ud_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    for (col = 0; col < 298; col++) {
      i = b_colidx_data[col];
      numalloc = b_colidx_data[col + 1] - 1;
      for (idx = i; idx <= numalloc; idx++) {
        S_data[(b_rowidx_data[idx - 1] + S->size[0] * col) - 1] =
            a * b_d_data[idx - 1];
      }
    }
    b_st.site = &vd_emlrtRSI;
    c_st.site = &x_emlrtRSI;
    numalloc = 0;
    for (idx = 0; idx < 88804; idx++) {
      if (S_data[idx % 298 + S->size[0] * (idx / 298)] != 0.0) {
        numalloc++;
      }
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    s->maxnz = numalloc;
    i = s->d->size[0];
    s->d->size[0] = numalloc;
    emxEnsureCapacity_real_T(&c_st, s->d, i, &kb_emlrtRTEI);
    for (i = 0; i < numalloc; i++) {
      s->d->data[i] = 0.0;
    }
    i = s->colidx->size[0];
    s->colidx->size[0] = 299;
    emxEnsureCapacity_int32_T(&c_st, s->colidx, i, &kb_emlrtRTEI);
    for (i = 0; i < 299; i++) {
      s->colidx->data[i] = 0;
    }
    s->colidx->data[0] = 1;
    i = s->rowidx->size[0];
    s->rowidx->size[0] = numalloc;
    emxEnsureCapacity_int32_T(&c_st, s->rowidx, i, &kb_emlrtRTEI);
    for (i = 0; i < numalloc; i++) {
      s->rowidx->data[i] = 0;
    }
    s->rowidx->data[0] = 1;
    numalloc = 0;
    for (col = 0; col < 298; col++) {
      for (row = 0; row < 298; row++) {
        real_T d;
        d = S_data[row + S->size[0] * col];
        if (d != 0.0) {
          s->rowidx->data[numalloc] = row + 1;
          s->d->data[numalloc] = d;
          numalloc++;
        }
      }
      s->colidx->data[col + 1] = numalloc + 1;
    }
    emxFree_real_T(&c_st, &S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                      const emxArray_int32_T *this_colidx,
                      const emxArray_int32_T *this_rowidx, emxArray_real_T *y_d,
                      emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *y_d_data;
  int32_T counts[196];
  const int32_T *this_colidx_data;
  const int32_T *this_rowidx_data;
  int32_T b;
  int32_T c;
  int32_T numalloc;
  int32_T outridx;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  this_rowidx_data = this_rowidx->data;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &bb_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b = this_colidx_data[this_colidx->size[0] - 1];
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b - 1 >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  if (b - 1 >= 1) {
    numalloc = b - 2;
  } else {
    numalloc = 0;
  }
  outridx = y_d->size[0];
  y_d->size[0] = numalloc + 1;
  emxEnsureCapacity_real_T(&b_st, y_d, outridx, &cb_emlrtRTEI);
  y_d_data = y_d->data;
  outridx = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc + 1;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, outridx, &cb_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (outridx = 0; outridx <= numalloc; outridx++) {
    y_d_data[outridx] = 0.0;
    y_rowidx_data[outridx] = 0;
  }
  outridx = y_colidx->size[0];
  y_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, y_colidx, outridx, &cb_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  for (outridx = 0; outridx < 197; outridx++) {
    y_colidx_data[outridx] = 0;
  }
  b_st.site = &cb_emlrtRSI;
  if (b - 1 > 2147483646) {
    c_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (numalloc = 0; numalloc <= b - 2; numalloc++) {
    y_colidx_data[this_rowidx_data[numalloc]]++;
  }
  y_colidx_data[0] = 1;
  for (numalloc = 0; numalloc < 196; numalloc++) {
    y_colidx_data[numalloc + 1] += y_colidx_data[numalloc];
    counts[numalloc] = 0;
  }
  for (c = 0; c < 298; c++) {
    for (numalloc = this_colidx_data[c] - 1;
         numalloc + 1 < this_colidx_data[c + 1]; numalloc++) {
      b = counts[this_rowidx_data[numalloc] - 1];
      outridx = (b + y_colidx_data[this_rowidx_data[numalloc] - 1]) - 1;
      y_d_data[outridx] = this_d_data[numalloc];
      y_rowidx_data[outridx] = c + 1;
      counts[this_rowidx_data[numalloc] - 1] = b + 1;
    }
  }
}

/* End of code generation (sparse.c) */
