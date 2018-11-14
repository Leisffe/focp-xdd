#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdio.h>

//14th of November

void reverse(char *s)
{
	int i, j, c;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main()
{
	char n1[51], n2[51], res[52];
	int i, c, sum;
	printf("Enter n1:");
	scanf("%s", n1);
	printf("Enter n2:");
	scanf("%s", n2);

	reverse(n1);
	reverse(n2);

	while (strlen(n1) > strlen(n2))
		strcat(n1, "0");
	while (strlen(n2) > strlen(n1))
		strcat(n2, "0");

	i = 0;
	c = 0;

	while (n1[i] != 0)
	{
		sum = n1[i] - '0' + n2[i] - '0' + c;
		res[i] = (sum % 10) + '0';
		c = sum / 10;
		i++;
	}
	if (c > 0)
		res[i++] = '1';
	res[i] = 0;
	reverse(res);
	printf("sum = %s\n", res);

	return 0;

}

//reversed version of the string

	/* //replaced with for loop
		i = 0;
		j = strlen(s) - 1;
	*/
/*
void reverse(char *s)
{
	int i, j, c;
for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
{
	c = s[i];
	s[i] = s[j];
	s[j] = c;
}
}
int main()
{
	char n1[51];
	printf("Enter n1: ");
	scanf("%s", n1);
	printf("Before: %s \n", n1);
	reverse(n1);
	printf("After: %s \n", n1);
}
*/


/*
//print lenght of n1
int main()
{
	char n1[51];
	printf("Enter n1: ");
	scanf("%s", n1);
	printf("n1=%s\n", n1);
	printf("Lenght = %d \n", strlen(n1));
	return 0;
}
*/


/*

int GCD(int a, int b)
{
	if (a == b) return a;
	if (a > b) return GCD(a - b, b);
	else return GCD(b - a, a);
	return 0;
}

int SCM(int a, int b)
{
	return a * b / GCD(a, b);
}

int main()
{
	int a, b;
	a = 21;
	b = 37;
	printf("SCM(%d,%d)=%d\n", a, b, SCM(a, b));
	return 0;
}

*/


/*
int GCD(int a, int b)
{
	if (a == b) return a;
	if (a > b) return GCD(a - b, b);
	else return GCD(b - a, a);
	return 0;
}

int main()
{
	int a, b;
	a = 21;
	b = 37;
	printf("GCD(%d,%d)=%d\n", a, b, GCD(a, b));
	return 0;
}

*/