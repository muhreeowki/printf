#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int count;
	int n = 1024;

	count = printf("pf1: % o", n);
	printf("\ncount: %d\n\n", count);

	count = _printf("pf2: % o", n);
	_printf("\ncount: %d\n\n", count);

	/*
	printf("__________Normal__________\n");
	count = printf("% d\n", n);
	printf("count: %d\n\n", count);

	count = printf("% i\n", n);
	printf("count: %d\n\n", count);

	count = printf("%+d\n", n);
	printf("count: %d\n\n", count);

	count = printf("%+i\n", n);
	printf("count: %d\n\n", count);

	count = printf("%#o\n", n);
	printf("count: %d\n\n", count);

	count = printf("%#x\n", n);
	printf("count: %d\n\n", count);

	count = printf("%#X\n", n);
	printf("count: %d\n\n", count);


	printf("__________Our__________\n");
	count = _printf("% d\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("% i\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%+d\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%+i\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%#o\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%#x\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%#X\n", n);
	_printf("count: %d\n\n", count);

	*/


	return (0);
}
