#include <iostream>
#include <math.h>
#include <string.h>

struct tel
{
	int k;
	tel *left, *right;
};

int main1()
{
	tel *root;
	root = new tel;

	root->k = 15;
	root->left = NULL;
	root->right = NULL;

	insert(root, 10);
	insert(root, 50);
}

print_tree(tel*p)
{
	if (p == NULL) return;
	print_tree(p->left);
	printf("%d", p->k);
}

