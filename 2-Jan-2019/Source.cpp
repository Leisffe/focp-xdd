#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

//HOMEWORK
//calculate flops of computer

/*
int f(const char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	int sum = 0, k;
	while ((k = va_arg(ap, int)) != 0)
		sum += k;
	va_end(ap);
	return 0;
}

int main()
{
	printf("result = %d\n",f("test", 567.854, 89, 10, 0));
	system("pause");
	return 0;
}

*/
/*
int f(const char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	printf("%f\n", va_arg(ap, double));
	printf("%d\n", va_arg(ap, int));
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
	return 0;
}

int main()
{
	f("test", 567.854,89,10,0);
	system("pause");
	return 0;
}

*/


/*
int main()
{
	srand(time(NULL));
	int i,k;
	char res[50] = { 0 };
	for (i = 1; i <= 6; i++)
	{
		do
		{
			k = 1 + rand() % 49;
		} while (res[k] == 1);
		res[k] = 1;
		printf("%d\n", k);
	}
	system("pause");
	return 0;

}
*/

/*

int main()
{
	srand(time(NULL));
	int k = rand();
	printf("%d\n", k);
	system("pause");
	return 0;

}

*/

/*
int main()
{
	while (1)
		printf("%d\n", time(NULL));
	srand(1234);
	int k = rand();
	printf("%d\n", k);
	system("pause");
	return 0;

}
*/