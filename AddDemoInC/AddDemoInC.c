// AddDemoInC.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int *i;
	int *s;
	i = (int *)malloc(sizeof(int));
	s = (int *)malloc(sizeof(int));
	*i = 3;
	*s = ++*i + ++*i + ++*i;
	printf("*i = %d, *s = %d\n", *i, *s);
	free(s);
	free(i);
	i = (int *)malloc(sizeof(int));
	s = (int *)malloc(sizeof(int));
	*i = 3;
	*s = add1(add1(++*i, ++*i), ++*i);
	printf("*i = %d, *s = %d\n", *i, *s);
	free(s);
	free(i);
	i = (int *)malloc(sizeof(int));
	s = (int *)malloc(sizeof(int));
	*i = 3;
	*s = add1(++*i, add1(++*i, ++*i));
	printf("*i = %d, *s = %d\n", *i, *s);
	free(s);
	free(i);
	i = (int *)malloc(sizeof(int));
	*i = 3;
	s = add2(add2(i, i), i);
	printf("*i = %d, *s = %d\n", *i, *s);
	free(s);
	free(i);
	i = (int *)malloc(sizeof(int));
	*i = 3;
	s = add2(i, add2(i, i));
	printf("*i = %d, *s = %d\n", *i, *s);
	free(s);
	free(i);
    return 0;
}


int add1(int x, int y)
{
	return x + y;
}


int* add2(int *x, int *y)
{
	int *z = (int *)malloc(sizeof(int));
	*z = ++*x + ++*y;
	return z;
}

