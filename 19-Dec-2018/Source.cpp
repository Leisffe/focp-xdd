#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX(a,b)      ((a)>(b)?(a):(b))
#define MAX3(a,b,c)   MAX(a,MAX(b,c))

int main() 
{
	printf("%i\n", MAX3(997, 555, 777));
	printf("%i\n", MAX3(1945, 2001, 911));
	printf("%i\n", MAX3(21, 37, 1488));
	system("pause");
	return 0;
}



/*
int main()
{
	char buf[100];
	int k, x, n;
	printf("Please enter two integers");
	fgets(buf, 100, stdin);
	buf[99] = 0;
	k = sscanf(buf, "%d%n", &x, &n);
	if (k == 1)
		printf("The first number: %d\n", x);
	else
	{
		printf("Error reading the first integer\n", buf);
			return 0;
	}
	k = sscanf(buf + n, "%d%n", &x, &n);
	if (k == 1)
		printf("the second number: %d\n", x);
	else
		printf("Error reading the second integer\n", buf + n);
	system("pause");
	return 0;
}*/