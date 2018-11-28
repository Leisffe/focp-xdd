#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//HOMEWORK: use fwrite for binary file

int main()
{
	FILE *f;
	int i, k, sum;
	double t[6] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	double copy[6];
	f = fopen("data.txt", "wt");
	if (f == NULL) { printf("Problems with opening the file\n"); return 0; }
	fwrite(t, sizeof(double), 6, f);
	fclose(f);

	f = fopen("data.txt", "rb");
	if (f == NULL) { printf("Problems with opening the file\n"); return 0; }
	fread(copy, sizeof(double), 6, f);
	fclose(f);
	for (i = 0; i < 6; i++)
		printf("copy[%d]=%f\n", i, copy[i]);
	system("pause");
	return 0;
}

/*
int main()
{
	FILE*f;
	int i, k, sum;
	f = fopen("data.txt", "wt");
	if (f == NULL)
	{
		printf("Problems opening the file\n");
		return 0;
	}
	for (i = 1; i <= 3; i++)
		fprintf(f, "%d\n", 10 * i);
	fclose(f);

	f = fopen("data.txt", "rt");
	if (f == NULL)
	{
		printf("Problems opening the file\n");
		return 0;
	}
	sum = 0;
	while (1)
	{
		k = fscanf(f, "%d", &i);
		if (k != 1) break;
		sum = sum + i;
	}
	fclose(f);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

*/



//NOTES FROM WHITEBOARD
/*


<stdio.h>
FILE *f
f=fopen("data.txt", "wt");
if (f==NULL)
fprintf(f, "value=%d",x);
fclose(f);

int x, k;
k=fscanf(f,"%d",&x);
f.close(f);


double, fwrite
*/
