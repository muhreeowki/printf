#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	
	int n = 0;


	printf("__________Normal__________\n");

	count = printf("space d: % d\n", n);
	printf("count: %d\n\n", count);

	count = printf("space i: % i\n", n);
	printf("count: %d\n\n", count);

	count = printf("plus d: %+d\n", n);
	printf("count: %d\n\n", count);

	count = printf("plus i: %+i\n", n);
	printf("count: %d\n\n", count);

	count = printf("hash octal: %#o\n", n);
	printf("count: %d\n\n", count);

	count = printf("hash x: %#x\n", n);
	printf("count: %d\n\n", count);

	count = printf("hash X: %#X\n", n);
	printf("count: %d\n\n", count);


	printf("__________Our__________\n");

	count = _printf("space d: % d\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("space i: % i\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("plus d: %+d\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("plus i: %+i\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("hash octal: %#o\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("hash x: %#x\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("hash X: %#X\n", n);
	_printf("count: %d\n\n", count);


	return (0);
}
