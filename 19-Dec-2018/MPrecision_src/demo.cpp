#include <stdio.h>
#include "fprecision.h"

int main()
{
   float_precision f1 = -1;             // Decimal
   float_precision f2 = "123.456E+789"; // String
   float_precision f3 = -123.456E78;    // Float
   float_precision f4 = f1;             // Another float_precision
   float_precision f5(0,8);         // Initialized to 0, with 8 digits
   float_precision f6("9.87654",4); // Initialized to 9.877, with 4 digits

   float_precision x1(0,50), x2(0,50), x3(0,50); // zeroes, 50 decimal digits
   
   x1 = 1;
   x2 = float_precision(4,50);  // 4.0 (50 decimal digits)
   x3 = x2*atan(x1);            // Pi
   
   printf("Arbitrary Precision Math C++ Package by Henrik Vestermark\n\n");

   printf("x3 = %s \n",x3.toString().c_str());

   x1 = 0;
   // Adding Pi one thousand times...
   for(int i=0;i<1000;i++)
       x1 = x1 + x3;

   printf("x1 = %s \n\n",x1.toString().c_str());

   return 0;

}