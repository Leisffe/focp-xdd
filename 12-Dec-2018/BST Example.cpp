#define _CRT_SECURE_NO_WARNINGS
#define USE_CONSOLE

#include <stdio.h>
#include <stdlib.h>


typedef
struct bstel {
    int data;
    struct bstel *left;
    struct bstel *right;
} bn;

int find(int key, struct bstel *node)
{
    if (!node) return 0;  /* not found */
    if (key == node->data)
        return 1; /* found! */
    if (key < node->data)
        return find(key, node->left);
    else
        return find(key, node->right);
}

int insert(bn *p, bn **root)
{
    if (*root && (*root)->data == p->data)
        return 1;       /* already present */
    if (!*root) {     /* empty tree */
        *root = p;
        return 0;
    }
    else
        if (p->data > (*root)->data)
            insert(p, &((*root)->right));
        else
            insert(p, &((*root)->left));
    return 0;
}

int ins_el(int key, bn **root)
{
    bn *p;
    p = (bn*)malloc(sizeof(bn));
    if (!p) return 2; /* out of memory */
    p->data = key;
    p->left = p->right = NULL;
    return insert(p, root);
}

void print_tree(bn *node)
{
    if (node) {
        print_tree(node->left);
        printf("%d ", node->data);
        print_tree(node->right);
    }
}

int main()
{
    bn *root = NULL;   /* initially an empty tree */

    ins_el(10, &root);  /* building the tree */
    ins_el(6, &root);   /* ...building       */
    
    ins_el(7, &root);
    ins_el(23, &root);
    ins_el(11, &root);

    print_tree(root);   /* should be sorted! */

    //printf("\n %d  \n", min(root)->data);
        printf("find(%d)=%d\n", 67, find(67, root));

    return 0;
}