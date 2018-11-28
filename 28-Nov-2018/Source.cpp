#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//HOMEWORK: use fwrite for binary file

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
