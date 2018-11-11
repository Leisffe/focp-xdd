#include "pch.h"
#include <iostream>
#include <stdio.h>

//find the square root of 1000 without using sqrt()

int main()
{
	double x0 = 1000.0;
		double xi, xi1;
		xi = 0;

	while (1)
	{
		xi1 = (xi + x0 / xi) / 2.0;
		if(fabs(xi1 - xi) < 0.01);
		break;
		xi = xi1;
	}
	printf("%c \n,8");

}
