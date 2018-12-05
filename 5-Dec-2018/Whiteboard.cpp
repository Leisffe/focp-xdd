//NOTES FROM THE WHITEBOARD
Today we are about to allocate memory


Allocate memory

int *p;

p=(int*) malloc(sizeof(int)*10)
p=new int[10];

*p=2-
p[1]=30
p[2]=40;
free(p);


delete p;

In some cases it's better to allocate memory step-by-step.

elements in series explained
see header.jpg

//lel - list new element

lel *head 

struct lel
{
	int k;
	lel *next;
}

head=new lel;
(*head).k = 10;
(*head).next = NULL;
head -> k = 10;

Adding new element to our list:

head=106

//pointing to the next element, e.g. from 30 to 20, from 20 to 10

lel *head, *p;
p = new lel;
p -> k = 20;
p -> next = head
head = p


100	20
101	106
102	
103
104	30
105	100
106	10
107	NULL