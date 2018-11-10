#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 7th of November

int mystrlen(char *p)
{
	int i = 0;
	while (p[i] != 0)
		i++;
	return i;
}

int main()
{
	char s[100] = "idk bruh";
	printf("Lenght = %d \n", mystrlen(s));
	return 0;
}

/*
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
*/

/*
void inc2(double *p)
{
	*p = *p + 2.0;
}

int main()
{
	double x;
	x = 10.0;
	inc2(&x);
	printf("x = %f \n", x);
	return 0;
}
*/

/*
int mysum(int a, int b)
{
	int sum = 0;
	int i;
	for (i = a; i <= b; i++);
	sum = sum + i;
	return sum;
}

int main()
{
	int x = 3, y = 8;
	printf("huj: %d \n", mysum(x, y));
	return 0;
}
*/

//Which number is bigger
/*
int mymax(int a, int b)
{
	int res;
	if (a > b)
		res = a;
	else
		res = b;
	return res;
}

int main()
{
	int x = 1488, y = 2137;
	printf("this one is bigger: %d \n", mymax(x, y));
	return 0;
}
*/

/*
int main()

{
	int i;
	double t[5];
	double *p;
	p = t;
	*p = 17.0;
	p++;
	*p = 2137.0;
	p++;
	*p = 1488.0;
	p++;
	*p = 1944.0;
	p++;
	for (i = 0; i < 5; i++);
	printf("%f   ", t[i]);
	return 0;
}
*/

/*
int main()
{
	double t[5];
	double *p;
	p = t;
	int *k;
	int x;
	k = &x;
	printf("Before: p=%d\n", k);
	k++;
	printf("After: p=%d\n", k);
}
*/

/*
int main()
{
	double t[5];
	double *p;
	p = t;
	*p = 17.0;

	printf("Before: p=%d\n", p);
	p++;
	printf("After: p=%d\n", p);

	return 0;
}
*/

/*
int main()
{
	char s[100];
	int c, i = 0;
	while ((c = getc(stdin)) != EOF)
	{
		s[i] = c;
		i++;
	}
	s[i] = 0;
	printf("String: %s \n", s);

	return 0;
}

*/

/*
int main()
{
	char s[100];
	int c;
	c = getc(stdin);
	printf("Code: %d \n", c);
	return 0;
}*/

//Printing string of characters starting from certain one
/*
int main()
{
	char s[100];
	s[0] = 'H';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	s[4] = 'o';
	s[5] = 0;
	printf("%s \n", &(s[2]));
	return 0;
}
*/
