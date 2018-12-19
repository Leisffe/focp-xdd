// Instead of #include "s2.cpp", promise the complier that function f1 is defined somewhere else.
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "s2.h"
#include "s2.h"

//int f1(int); //f1 is an integer and returns an integer.
//But this can be written in header file.
//We should avoid including #include "s2.h" 2 times at the same time at some times
//But it works now because we included #infndef S2_H in header file.
//You can open the stdio.h to see how the #ifndef and #endif work.
//#include "fprecision.h" explained

int main()
{
	int x;
	x = f1(7);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}