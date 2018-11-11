#include "pch.h"
#include <iostream>


//ASCII code of given characters
/*
int main() {
	int c = 0;
	int a[26];
	for (int i = 0; i < 26; i++)
		a[i] = 0;
	while ((c = getc(stdin)) != EOF)
	{
		printf("c = %d \n", c);
		if (c >= 'a' && c <= 'z')
			a[c - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		printf("the letter %c occured %d times", i + 'a', a[i]);
	system("pause");
	return(0);
}
*/

//Summing numbers 
/*
int main()
{
	long long int t[5];
	long long int sum = 0;
	long long int max;
	max = t[0];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%lld", &(t[i]));
		sum = sum + t[i];
		if (t[i] > max)
			max = t[i];
	}
	printf("Entered numbers in reverse order \n");
	for (int j = 4; j >= 0; j--)
	{
		printf("%lld\n", t[j]);
	}
	printf("\n");
	printf("Sum of entered numbers: %lld\n", sum);
	printf("Largest entered number: %lld\n", max);
	system("pause");
return(0);
}