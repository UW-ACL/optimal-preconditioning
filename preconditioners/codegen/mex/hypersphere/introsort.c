/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * introsort.c
 *
 * Code generation for function 'introsort'
 *
 */

/* Include files */
#include "introsort.h"
#include "heapsort.h"
#include "hypersphere_types.h"
#include "insertionsort.h"
#include "rt_nonfinite.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  int32_T xstart;
  int32_T xend;
  int32_T depth;
} struct_T;
#endif /* typedef_struct_T */

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = {
    47,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    49,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    55,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    58,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    34,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    42,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    41,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    62,           /* lineNo */
    39,           /* colNo */
    "stack/push", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/stack.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    48,            /* lineNo */
    48,            /* colNo */
    "stack/stack", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/stack.m", /* pName */
    4                    /* checkKind */
};

/* Function Definitions */
void b_introsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                 int32_T xend)
{
  emlrtStack st;
  struct_T frame;
  int32_T nsort;
  int32_T pmax;
  int32_T pmin;
  int32_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  x_data = x->data;
  if (xstart < xend) {
    nsort = (xend - xstart) + 1;
    if (nsort <= 32) {
      st.site = &tc_emlrtRSI;
      b_insertionsort(&st, x, xstart, xend);
    } else {
      struct_T st_d_data[120];
      int32_T pow2p;
      int32_T st_n;
      int32_T t;
      int32_T unnamed_idx_0;
      boolean_T exitg1;
      pmax = 31;
      pmin = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax - pmin > 1)) {
        t = (pmin + pmax) >> 1;
        pow2p = 1 << t;
        if (pow2p == nsort) {
          pmax = t;
          exitg1 = true;
        } else if (pow2p > nsort) {
          pmax = t;
        } else {
          pmin = t;
        }
      }
      pow2p = (pmax - 1) << 1;
      frame.xstart = xstart;
      frame.xend = xend;
      frame.depth = 0;
      st.site = &vc_emlrtRSI;
      unnamed_idx_0 = pow2p << 1;
      if (unnamed_idx_0 < 0) {
        emlrtNonNegativeCheckR2012b(unnamed_idx_0, &emlrtDCI, &st);
      }
      for (pmin = 0; pmin < unnamed_idx_0; pmin++) {
        st_d_data[pmin] = frame;
      }
      st.site = &uc_emlrtRSI;
      if (unnamed_idx_0 <= 0) {
        emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                      "Coder:toolbox:StackPushLimit",
                                      "Coder:toolbox:StackPushLimit", 0);
      }
      st_d_data[0] = frame;
      st_n = 1;
      while (st_n > 0) {
        frame = st_d_data[st_n - 1];
        st_n--;
        pmin = frame.xend - frame.xstart;
        if (pmin + 1 <= 32) {
          st.site = &tb_emlrtRSI;
          b_insertionsort(&st, x, frame.xstart, frame.xend);
          x_data = x->data;
        } else if (frame.depth == pow2p) {
          st.site = &ub_emlrtRSI;
          c_heapsort(&st, x, frame.xstart, frame.xend);
          x_data = x->data;
        } else {
          pmax = (frame.xstart + pmin / 2) - 1;
          pmin = x_data[frame.xstart - 1];
          if (x_data[pmax] < pmin) {
            x_data[frame.xstart - 1] = x_data[pmax];
            x_data[pmax] = pmin;
          }
          pmin = x_data[frame.xstart - 1];
          nsort = x_data[frame.xend - 1];
          if (nsort < pmin) {
            x_data[frame.xstart - 1] = nsort;
            x_data[frame.xend - 1] = pmin;
          }
          pmin = x_data[frame.xend - 1];
          if (pmin < x_data[pmax]) {
            t = x_data[pmax];
            x_data[pmax] = pmin;
            x_data[frame.xend - 1] = t;
          }
          pmin = x_data[pmax];
          x_data[pmax] = x_data[frame.xend - 2];
          x_data[frame.xend - 2] = pmin;
          nsort = frame.xstart - 1;
          pmax = frame.xend - 2;
          int32_T exitg2;
          do {
            exitg2 = 0;
            for (nsort++; x_data[nsort] < pmin; nsort++) {
            }
            for (pmax--; pmin < x_data[pmax]; pmax--) {
            }
            if (nsort + 1 >= pmax + 1) {
              exitg2 = 1;
            } else {
              t = x_data[nsort];
              x_data[nsort] = x_data[pmax];
              x_data[pmax] = t;
            }
          } while (exitg2 == 0);
          x_data[frame.xend - 2] = x_data[nsort];
          x_data[nsort] = pmin;
          if (nsort + 2 < frame.xend) {
            st.site = &vb_emlrtRSI;
            if (st_n >= unnamed_idx_0) {
              emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st_d_data[st_n].xstart = nsort + 2;
            st_d_data[st_n].xend = frame.xend;
            st_d_data[st_n].depth = frame.depth + 1;
            st_n++;
          }
          if (frame.xstart < nsort + 1) {
            st.site = &wb_emlrtRSI;
            if (st_n >= unnamed_idx_0) {
              emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st_d_data[st_n].xstart = frame.xstart;
            st_d_data[st_n].xend = nsort + 1;
            st_d_data[st_n].depth = frame.depth + 1;
            st_n++;
          }
        }
      }
    }
  }
}

void c_introsort(const emlrtStack *sp, int32_T x[196])
{
  emlrtStack st;
  struct_T st_d[28];
  int32_T i;
  int32_T st_n;
  int32_T xmid;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 28; i++) {
    st_d[i].xstart = 1;
    st_d[i].xend = 196;
    st_d[i].depth = 0;
  }
  st_d[0].xstart = 1;
  st_d[0].xend = 196;
  st_d[0].depth = 0;
  st_n = 1;
  while (st_n > 0) {
    struct_T expl_temp;
    int32_T pivot;
    int32_T s_depth;
    expl_temp = st_d[st_n - 1];
    pivot = st_d[st_n - 1].xstart - 1;
    i = st_d[st_n - 1].xend - 1;
    s_depth = st_d[st_n - 1].depth;
    st_n--;
    xmid = expl_temp.xend - expl_temp.xstart;
    if (xmid + 1 <= 32) {
      st.site = &tb_emlrtRSI;
      c_insertionsort(&st, x, expl_temp.xstart, expl_temp.xend);
    } else if (expl_temp.depth == 14) {
      st.site = &ub_emlrtRSI;
      d_heapsort(&st, x, expl_temp.xstart, expl_temp.xend);
    } else {
      int32_T t;
      xmid = (expl_temp.xstart + xmid / 2) - 1;
      if (x[xmid] < x[pivot]) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[xmid];
        x[xmid] = t;
      }
      if (x[i] < x[pivot]) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      if (x[i] < x[xmid]) {
        t = x[xmid];
        x[xmid] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      pivot = x[xmid];
      x[xmid] = x[expl_temp.xend - 2];
      x[expl_temp.xend - 2] = pivot;
      i = expl_temp.xstart - 1;
      xmid = expl_temp.xend - 2;
      int32_T exitg1;
      do {
        exitg1 = 0;
        for (i++; x[i] < pivot; i++) {
        }
        for (xmid--; pivot < x[xmid]; xmid--) {
        }
        if (i + 1 >= xmid + 1) {
          exitg1 = 1;
        } else {
          t = x[i];
          x[i] = x[xmid];
          x[xmid] = t;
        }
      } while (exitg1 == 0);
      x[expl_temp.xend - 2] = x[i];
      x[i] = pivot;
      if (i + 2 < expl_temp.xend) {
        st.site = &vb_emlrtRSI;
        if (st_n >= 28) {
          emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d[st_n].xstart = i + 2;
        st_d[st_n].xend = expl_temp.xend;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
      if (expl_temp.xstart < i + 1) {
        st.site = &wb_emlrtRSI;
        if (st_n >= 28) {
          emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d[st_n].xstart = expl_temp.xstart;
        st_d[st_n].xend = i + 1;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
    }
  }
}

void introsort(const emlrtStack *sp, int32_T x[298])
{
  emlrtStack st;
  struct_T st_d[32];
  int32_T i;
  int32_T st_n;
  int32_T xmid;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 32; i++) {
    st_d[i].xstart = 1;
    st_d[i].xend = 298;
    st_d[i].depth = 0;
  }
  st_d[0].xstart = 1;
  st_d[0].xend = 298;
  st_d[0].depth = 0;
  st_n = 1;
  while (st_n > 0) {
    struct_T expl_temp;
    int32_T pivot;
    int32_T s_depth;
    expl_temp = st_d[st_n - 1];
    pivot = st_d[st_n - 1].xstart - 1;
    i = st_d[st_n - 1].xend - 1;
    s_depth = st_d[st_n - 1].depth;
    st_n--;
    xmid = expl_temp.xend - expl_temp.xstart;
    if (xmid + 1 <= 32) {
      st.site = &tb_emlrtRSI;
      insertionsort(&st, x, expl_temp.xstart, expl_temp.xend);
    } else if (expl_temp.depth == 16) {
      st.site = &ub_emlrtRSI;
      b_heapsort(&st, x, expl_temp.xstart, expl_temp.xend);
    } else {
      int32_T t;
      xmid = (expl_temp.xstart + xmid / 2) - 1;
      if (x[xmid] < x[pivot]) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[xmid];
        x[xmid] = t;
      }
      if (x[i] < x[pivot]) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      if (x[i] < x[xmid]) {
        t = x[xmid];
        x[xmid] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      pivot = x[xmid];
      x[xmid] = x[expl_temp.xend - 2];
      x[expl_temp.xend - 2] = pivot;
      i = expl_temp.xstart - 1;
      xmid = expl_temp.xend - 2;
      int32_T exitg1;
      do {
        exitg1 = 0;
        for (i++; x[i] < pivot; i++) {
        }
        for (xmid--; pivot < x[xmid]; xmid--) {
        }
        if (i + 1 >= xmid + 1) {
          exitg1 = 1;
        } else {
          t = x[i];
          x[i] = x[xmid];
          x[xmid] = t;
        }
      } while (exitg1 == 0);
      x[expl_temp.xend - 2] = x[i];
      x[i] = pivot;
      if (i + 2 < expl_temp.xend) {
        st.site = &vb_emlrtRSI;
        if (st_n >= 32) {
          emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d[st_n].xstart = i + 2;
        st_d[st_n].xend = expl_temp.xend;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
      if (expl_temp.xstart < i + 1) {
        st.site = &wb_emlrtRSI;
        if (st_n >= 32) {
          emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d[st_n].xstart = expl_temp.xstart;
        st_d[st_n].xend = i + 1;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
    }
  }
}

/* End of code generation (introsort.c) */
