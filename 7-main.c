#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int count;

	void *n = malloc(5);

	count = printf("%p\n", n);
	printf("len: %d\n\n", count);

	count = _printf("%p\n", n);
	_printf("len: %d\n\n", count);
	/*
	printf("__________Normal__________\n");
	count = printf("%lx\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hx\n", n);
	printf("count: %d\n\n", count);

	count = printf("%lo\n", n);
	printf("count: %d\n\n", count);

	count = printf("%ho\n", n);
	printf("count: %d\n\n", count);


	printf("__________Our__________\n");
	count = _printf("%lx\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%hx\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%lo\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%ho\n", n);
	_printf("count: %d\n\n", count);

	*/

	return (0);
}
