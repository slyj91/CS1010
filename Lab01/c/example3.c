/*****************************************************
 *  Program example3.c
 * 
 *  This program prints the system limitations. 
 *****************************************************/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
   /*  Print integer type maximums.  */
   printf("short maximum: %i \n",SHRT_MAX);
   printf("int maximum: %i \n",INT_MAX);
   printf("long maximum: %li \n\n",LONG_MAX);

   /*  Print float precision, range, maximum.  */
   printf("float precision digits: %i \n",FLT_DIG);
   printf("float maximum exponent: %i \n",
          FLT_MAX_10_EXP);
   printf("float maximum: %e \n\n",FLT_MAX);

   /*  Print double precision, range, maximum.  */
   printf("double precision digits: %i \n",DBL_DIG);
   printf("double maximum exponent: %i \n",
          DBL_MAX_10_EXP);
   printf("double maximum: %e \n\n",DBL_MAX);

   /*  Print long precision, range, maximum.  */
   printf("long double precision digits: %i \n",LDBL_DIG);
   printf("long double maximum exponent: %i \n",
          LDBL_MAX_10_EXP);
   printf("long double maximum: %Le \n",LDBL_MAX);

   return 0;
}

