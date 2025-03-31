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
#include "insertionsort.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include <string.h>

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
static emlrtRSInfo sb_emlrtRSI = {
    41,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    58,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    55,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    49,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    47,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    42,          /* lineNo */
    "introsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/introsort.m" /* pathName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    62,           /* lineNo */
    39,           /* colNo */
    "stack/push", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/stack.m" /* pName */
};

static emlrtDCInfo l_emlrtDCI = {
    48,            /* lineNo */
    48,            /* colNo */
    "stack/stack", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/stack.m", /* pName */
    4                    /* checkKind */
};

/* Function Definitions */
void introsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xend,
               const emxArray_int32_T *cmp_workspace_a,
               const emxArray_int32_T *cmp_workspace_b)
{
  emlrtStack st;
  struct_T st_d_data[120];
  struct_T frame;
  const int32_T *cmp_workspace_a_data;
  const int32_T *cmp_workspace_b_data;
  int32_T MAXDEPTH;
  int32_T i;
  int32_T pmax;
  int32_T pmin;
  int32_T pow2p;
  int32_T st_n;
  int32_T t;
  int32_T unnamed_idx_0;
  int32_T *x_data;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  cmp_workspace_b_data = cmp_workspace_b->data;
  cmp_workspace_a_data = cmp_workspace_a->data;
  x_data = x->data;
  pmax = 31;
  pmin = 0;
  exitg1 = false;
  while ((!exitg1) && (pmax - pmin > 1)) {
    t = (pmin + pmax) >> 1;
    pow2p = 1 << t;
    if (pow2p == xend) {
      pmax = t;
      exitg1 = true;
    } else if (pow2p > xend) {
      pmax = t;
    } else {
      pmin = t;
    }
  }
  MAXDEPTH = (pmax - 1) << 1;
  frame.xstart = 1;
  frame.xend = xend;
  frame.depth = 0;
  st.site = &sb_emlrtRSI;
  unnamed_idx_0 = MAXDEPTH << 1;
  if (unnamed_idx_0 < 0) {
    emlrtNonNegativeCheckR2012b(unnamed_idx_0, &l_emlrtDCI, &st);
  }
  for (i = 0; i < unnamed_idx_0; i++) {
    st_d_data[i] = frame;
  }
  st.site = &yb_emlrtRSI;
  if (unnamed_idx_0 <= 0) {
    emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI,
                                  "Coder:toolbox:StackPushLimit",
                                  "Coder:toolbox:StackPushLimit", 0);
  }
  st_d_data[0] = frame;
  st_n = 1;
  while (st_n > 0) {
    frame = st_d_data[st_n - 1];
    st_n--;
    i = frame.xend - frame.xstart;
    if (i + 1 <= 32) {
      st.site = &wb_emlrtRSI;
      insertionsort(&st, x, frame.xstart, frame.xend, cmp_workspace_a,
                    cmp_workspace_b);
      x_data = x->data;
    } else if (frame.depth == MAXDEPTH) {
      st.site = &vb_emlrtRSI;
      b_heapsort(&st, x, frame.xstart, frame.xend, cmp_workspace_a,
                 cmp_workspace_b);
      x_data = x->data;
    } else {
      int32_T xmid;
      boolean_T varargout_1;
      xmid = (frame.xstart + i / 2) - 1;
      i = cmp_workspace_a_data[x_data[xmid] - 1];
      pmax = x_data[frame.xstart - 1];
      pmin = cmp_workspace_a_data[pmax - 1];
      if (i < pmin) {
        varargout_1 = true;
      } else if (i == pmin) {
        varargout_1 = (cmp_workspace_b_data[x_data[xmid] - 1] <
                       cmp_workspace_b_data[pmax - 1]);
      } else {
        varargout_1 = false;
      }
      if (varargout_1) {
        x_data[frame.xstart - 1] = x_data[xmid];
        x_data[xmid] = pmax;
      }
      i = x_data[frame.xend - 1];
      pmax = cmp_workspace_a_data[i - 1];
      pmin = x_data[frame.xstart - 1];
      t = cmp_workspace_a_data[pmin - 1];
      if (pmax < t) {
        varargout_1 = true;
      } else if (pmax == t) {
        varargout_1 =
            (cmp_workspace_b_data[i - 1] < cmp_workspace_b_data[pmin - 1]);
      } else {
        varargout_1 = false;
      }
      if (varargout_1) {
        x_data[frame.xstart - 1] = i;
        x_data[frame.xend - 1] = pmin;
      }
      i = x_data[frame.xend - 1];
      pmax = cmp_workspace_a_data[i - 1];
      pmin = cmp_workspace_a_data[x_data[xmid] - 1];
      if (pmax < pmin) {
        varargout_1 = true;
      } else if (pmax == pmin) {
        varargout_1 = (cmp_workspace_b_data[i - 1] <
                       cmp_workspace_b_data[x_data[xmid] - 1]);
      } else {
        varargout_1 = false;
      }
      if (varargout_1) {
        t = x_data[xmid];
        x_data[xmid] = i;
        x_data[frame.xend - 1] = t;
      }
      pow2p = x_data[xmid] - 1;
      x_data[xmid] = x_data[frame.xend - 2];
      x_data[frame.xend - 2] = pow2p + 1;
      pmax = frame.xstart - 1;
      pmin = frame.xend - 2;
      int32_T exitg2;
      do {
        int32_T exitg3;
        exitg2 = 0;
        pmax++;
        do {
          exitg3 = 0;
          i = cmp_workspace_a_data[x_data[pmax] - 1];
          if (i < cmp_workspace_a_data[pow2p]) {
            varargout_1 = true;
          } else if (i == cmp_workspace_a_data[pow2p]) {
            varargout_1 = (cmp_workspace_b_data[x_data[pmax] - 1] <
                           cmp_workspace_b_data[pow2p]);
          } else {
            varargout_1 = false;
          }
          if (varargout_1) {
            pmax++;
          } else {
            exitg3 = 1;
          }
        } while (exitg3 == 0);
        pmin--;
        do {
          exitg3 = 0;
          i = cmp_workspace_a_data[x_data[pmin] - 1];
          if (cmp_workspace_a_data[pow2p] < i) {
            varargout_1 = true;
          } else if (cmp_workspace_a_data[pow2p] == i) {
            varargout_1 = (cmp_workspace_b_data[pow2p] <
                           cmp_workspace_b_data[x_data[pmin] - 1]);
          } else {
            varargout_1 = false;
          }
          if (varargout_1) {
            pmin--;
          } else {
            exitg3 = 1;
          }
        } while (exitg3 == 0);
        if (pmax + 1 >= pmin + 1) {
          exitg2 = 1;
        } else {
          t = x_data[pmax];
          x_data[pmax] = x_data[pmin];
          x_data[pmin] = t;
        }
      } while (exitg2 == 0);
      x_data[frame.xend - 2] = x_data[pmax];
      x_data[pmax] = pow2p + 1;
      if (pmax + 2 < frame.xend) {
        st.site = &ub_emlrtRSI;
        if (st_n >= unnamed_idx_0) {
          emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d_data[st_n].xstart = pmax + 2;
        st_d_data[st_n].xend = frame.xend;
        st_d_data[st_n].depth = frame.depth + 1;
        st_n++;
      }
      if (frame.xstart < pmax + 1) {
        st.site = &tb_emlrtRSI;
        if (st_n >= unnamed_idx_0) {
          emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI,
                                        "Coder:toolbox:StackPushLimit",
                                        "Coder:toolbox:StackPushLimit", 0);
        }
        st_d_data[st_n].xstart = frame.xstart;
        st_d_data[st_n].xend = pmax + 1;
        st_d_data[st_n].depth = frame.depth + 1;
        st_n++;
      }
    }
  }
}

/* End of code generation (introsort.c) */
