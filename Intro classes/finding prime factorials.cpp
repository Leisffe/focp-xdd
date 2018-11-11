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
	else#include "pch.h"
#include <stdio.h>
#include <iostream>

int main()
{
	long long int n = 12;
	int isprime = 1; /*1: prime, 0: not prime */
	long long int i;

	printf("n = %I64d \n", n);
	//printf("n = %I64d = ", n);

	while (n > 1) {
		for (i = 2; i <= n; i++) {

			if (n%i == 0) {
				printf("found divider i = %I64d \n", i);
				//printf("%I64d *", i);
				n = n / i;
				--i;
				//break; //break breaks the loop xD
			}



			//while (n > 1);
			//for (i = 2; i <= n; i++);
			//n = n / i;
			//break;
			break;
		}
	}

	printf("%c \n",8);
	int papiez;
	std::cin >> papiez;
	return 0;
}





//I64D
//long long int
//dividing number using primary numbers

		printf("%d is not prime\n", n);

	return 0;
}