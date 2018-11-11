#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "pch.h"
//don't mix printf with cout
// int*p;
/*p = &x;



*/
/*
int main()
{
	{
		int a;
		a = 10
			cout << a;

		return 0;
	}
	*/
int main()
{
		int x;
		int *p;
		p = &x;
		*p = 17;
		printf("%d \n", x);
		return 0;
}
