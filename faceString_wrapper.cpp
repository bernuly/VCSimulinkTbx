

/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include <stdio.h>
#include <string.h>


/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 6
#define y_width 1
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
void faceString_Outputs_wrapper(const real_T *AUs,
				real_T *faceStrArr)
{
  /* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
#define NRAU 16
#define ASIZE 2048



  int ii;
  int vAU[NRAU]={1, 2, 4, 5, 6, 7, 9, 10, 11, 12, 15, 16, 17, 20, 23, 26};
  char strTemp[256];
  char strAUTemp[ASIZE];
  char strAU[ASIZE];
 
  memset(strTemp, 0, 256);
  memset(strAUTemp, 0, ASIZE);
  memset(strAU, 0, ASIZE);
 
  for(ii=0; ii<NRAU; ii++){
    if(fabs(AUs[ii])>0.05){
      sprintf(strTemp, "<face type=\"FACS\" au=\"%d\" amount=\"%04.2f\"/>", vAU[ii], AUs[ii]);
      strcat(strAUTemp, strTemp);
    }
  }

  sprintf(strAU, "%s", strAUTemp);
 
  for(ii = 0; ii<ASIZE; ii++){
    faceStrArr[ii] = (char)strAU[ii];
  }
  /* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
