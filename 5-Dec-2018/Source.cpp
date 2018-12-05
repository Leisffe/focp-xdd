#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <math.h>



//Homework
//Reversed lel using tail, rearray the existing one from the previous task.





//Loop, list of elements
struct lel
{
	int k;
	lel *next;
};

int main()
{
	lel *head, *p;
	head = new lel;
	head->k = 10;
	head->next = NULL;

	p = new lel;
	p->k = 20;
	p->next = head;
	head = p;

	p = head;
	while (p != NULL)
	{
		printf("%d\n", p->k);
		p = p->next;
	}
	
	//deleting the list
	p = head;
	while (p != NULL)
	{
		head = p;
		p = p->next;
		delete head;
	}
	system("pause");
	return 0;
}




/*
//The task below is about:
//1. define a pointer to int
//2. allocate memory
//3. copy elements
//4. return the pointer


int *copyintarr(int *src, int nelem)

{
	int i, *r; //New pointer
	r = new int[nelem]; //Allocating the memory to nelem
	for (i = 0; i < nelem; i++) //loop
		r[i] = src[i]; //Accessing the elements of an array.
	return r; //returning the value

}

int main()
{
	int n, i;
	int *p, *q;
	printf("How many numbers would you like to store: ");
	scanf("%d", &n);
	p = new int[n];
	if (p == NULL)
	{
		printf("Out of memory...");
		return 0;
	}
	for (i = 0; i < n; i++)
		scanf("%d", &(p[i]));

	q = copyintarr(p, n);

	for (i = 0; i < n; i++)
		printf("q[%d]=%d\n", i, q[i]);

	delete p;
	delete q;

	system("pause");
	return 0;
}

*/








//Write certain amount of numbers to the memory.
/*
int main()
{
	int n, i;
	int *p;
	printf("How many numbers would you like to store: ");
	scanf("%d", &n);
	p = new int[n];
	if (p == NULL)
	{
		printf("Out of memory...");
		return 0;
	}
	for (i = 0; i < n; i++)
		scanf("%d", &(p[i]));

	for (i = 0; i < n; i++)
		printf("p[%d]=%d\n", i, p[i]);

	delete p;

	system("pause");
	return 0;
}

*/