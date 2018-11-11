#include "pch.h"
#include <stdio.h>

int main()
{
	int n = 12;
	int isprime = 1;	/* 1: prime, 0: not prime*/

	int i, j;
	for (i = 1; i < 6; i++)
		for (j = 10; j < 60; j = j + 10)
			{
			printf("i=%d, j=%d\n", i, j);
}
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			isprime = 0;
	}
	if (isprime)
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);

	return 0;
}