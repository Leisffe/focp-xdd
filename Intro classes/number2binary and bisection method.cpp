#include "pch.h"
#include <stdio.h>

int main()
{
	int n = 12345;
	int mask = 1;
	while (mask < n) mask = mask << 1;	
	while (mask > 0)
	{
		printf("%d", !!(n & mask));
		mask = mask >> 1;
	}
	printf("%");
	return 0;
}

//this code shows any number in binary




//Bisection method
int main()
{
	double a, b, c, y;
	a = 1.0;
	b = 2.0;
	while (b - a > 0.000000001)
	{
		c = (a + b) / 2;
		ya = pow(a, a);
		ya = pow(b, b);
		ya = pow(c, c);
		if ((ya > 0) == (ya > 0));
			a = c;
		else
			b = c;
	}
	printf("%d\n")
}
