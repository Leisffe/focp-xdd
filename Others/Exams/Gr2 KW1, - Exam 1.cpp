//This was on the exam in the other group.

#include "stdafx.h"
#include <iostream>
#include "Header.h"

int functionG(int x) {
	return 3 * (x ^ 3) + 2 * (x ^ 2) + 1;
}

void fill(int *tab, int a) {

	for (int i = 0; i < 100; i++) {
		tab[i] = functionG(i + a);
	}
}

int sumOfAllElements(int *tab) {
	int result = 0;
	for (int i = 0; i < 100; i++) {
		result += tab[i];
	}

	return result;
}

void addTwoArrays(int *tab1, int *tab2, int *result) {
	for (int i = 0; i < 100; i++) {
		result[i] = tab1[i] + tab2[i];
	}
}

void printTabs(int *tab1, int *tab2, int *tab3) {
	for (int i = 0; i < 100; i++) {
		printf("%d | %d | %d | %d\n", i, tab1[i], tab2[i], tab3[i]);
	}
}

int main()
{
	int tab1[100], tab2[100], tab3[100];
	fill(tab1, -10);
	fill(tab2, -50);

	printf("Sum of all elements of tab1 is %d.\n", sumOfAllElements(tab1));
	printf("Sum of all elements of tab2 is %d.\n\n", sumOfAllElements(tab2));

	addTwoArrays(tab1, tab2, tab3);

	printTabs(tab1, tab2, tab3);
	system("pause");
	return 0;
}

