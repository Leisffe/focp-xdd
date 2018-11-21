#include <math.h>
#include <stdio.h>


//this one is wasn't finished yet
struct mycplx
{
	double Re, Im;
};

mycplx addcplx(mycplx a, mycplx b)
{
	mycplx t;
	t.Re = a.Re + b.Re;
	t.Im = a.Im + b.Im;
	return t;
}

void printcplx(mycplx x)
{
	printf("%f + %f*i \n", x.Re, x.Im);
}

double cplxabs(mycplx z)
{
	return sqrt(z.Re*z.Re + z.Im*z.Im);
}
int main()
{
	mycplx values[5];
	values[0].Re = 1.2;
	values[0].Im = 2.3;
	values[1].Re = 1.3;
	values[1].Im = 2.6;
	values[2].Re = 2.1;
	values[2].Im = 3.7;
	values[3].Re = 14.88;
	values[3].Im = 0.9;
	c = addcplx(a, b);
	printcplx(c);
	return 0;
}


//Struct for imaginary numbers
/*
struct mycplx
{
	double Re, Im;
};

mycplx addcplx(mycplx a, mycplx b)
{
	mycplx t;
	t.Re = a.Re + b.Re;
	t.Im = a.Im + b.Im;
	return t;
}

void printcplx(mycplx x)
{
	printf("%f + %f*i \n", x.Re, x.Im);
}
int main()
{
	mycplx a, b, c;
	a.Re = 212.44;
	a.Im = 213.7;
	b.Re = 14.88;
	b.Im = 13.37;
	c = addcplx(a, b);
	printcplx(c);
	return 0;
}

*/


//struct a, b
/*
struct mys
{
	int k;
	double x;
};

int main()
{
	mys a, b;
	a.k = 15;
	a.x = 3.14;
	b = a;
	printf("%d %f \n",
		b.k, b.x);
	return 0;
}
*/