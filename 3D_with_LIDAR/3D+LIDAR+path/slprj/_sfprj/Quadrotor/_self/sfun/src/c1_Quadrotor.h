#ifndef __c1_Quadrotor_h__
#define __c1_Quadrotor_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c1_ResolvedFunctionInfo;

typedef struct {
  int32_T c1_sfEvent;
  boolean_T c1_isStable;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_Quadrotor;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c1_Pp;
  boolean_T c1_Pp_not_empty;
  real_T c1_Q;
  boolean_T c1_Q_not_empty;
  real_T c1_R;
  boolean_T c1_R_not_empty;
  real_T c1_xp;
  boolean_T c1_xp_not_empty;
  real_T c1_A1;
  boolean_T c1_A1_not_empty;
  real_T c1_H;
  boolean_T c1_H_not_empty;
  real_T c1_I;
  boolean_T c1_I_not_empty;
  real_T c1_xp_dot;
  boolean_T c1_xp_dot_not_empty;
} SFc1_QuadrotorInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Quadrotor_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_Quadrotor_get_check_sum(mxArray *plhs[]);
extern void c1_Quadrotor_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
