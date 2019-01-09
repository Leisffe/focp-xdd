#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

int mydblcmp(const void*a, const void*b)
{
	double diff;
	diff = *(double*)a - *(double*)b;
	if (diff == 0)
		return 0;
	else
		if (diff < 0)
			return -1;
		else
			return 1;

}

int main()
{
	mydate dates[] = {
		{2019, 1, 9},
		{1945, 8, 2},
		{2005, 4, 2},
		{2137, 12, 20},

	}
	double t[] =
	{
		10.7, 12.1, 5.7, 13.1 };
	qsort(t, 4, sizeof(double), mydblcmp);
	qsort(dates, 4, sizeof(mydate))

}