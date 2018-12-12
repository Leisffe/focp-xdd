//NOTES FROM THE WHITEBOARD

struct tel
{
	int k;
	tel *left, *right;
};


void print_tree(tel *p)
{
	if (p==NULL) return;
	print_tree(p->left);
	printf("%d",p->k);
	print_tree(p->right);
}


void insert(tel *p, int key)

p->left=new tel;
p->left->k=...


q=new tel;
q->k=key;
q->right=...


void insert(tel *p, int key)
{
	if (key<p->k)
	{ if (p->left !=NULL)
		inesrt (p->left, key)
	else ...

strlen
strcpy
strncpy
strstr
strcat

char inpl]="Please bring me some tea and coffee"
char res[100]