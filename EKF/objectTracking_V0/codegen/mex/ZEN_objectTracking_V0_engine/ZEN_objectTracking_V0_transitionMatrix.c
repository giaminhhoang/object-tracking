/*
 * ZEN_objectTracking_V0_transitionMatrix.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_transitionMatrix'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_transitionMatrix.h"

/* Function Definitions */
void c_ZEN_objectTracking_V0_transit(real_T Ts, real_T Phi[16])
{
  /*  **************************************************************** */
  /*  */
  /*            Description : return TransitionMatrix */
  /*                    frame = Cartesian */
  /*                    state = 4 parameters */
  /*             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - Ts : [1x1] sampling period */
  /*                         */
  /*            Outputs :  */
  /*                        - Phi : [4x4] transition matrix */
  /*               */
  /*  */
  /*  ************************************************************* */
  memset(&Phi[0], 0, sizeof(real_T) << 4);
  Phi[0] = 1.0;
  Phi[5] = 1.0;
  Phi[10] = 1.0;
  Phi[15] = 1.0;
  Phi[8] = Ts;
  Phi[13] = Ts;
}

/* End of code generation (ZEN_objectTracking_V0_transitionMatrix.c) */
