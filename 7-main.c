#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int count;
	void *c;

	c = &count;

	count = printf("%p\n", (void *) c);
	printf("count: %d\n\n", count);

	count = _printf("%p\n", (void *) c);
	printf("count: %d\n\n", count);

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

	count = printf("% +d\n", n);
	printf("count: %d\n\n", count);

	count = printf("%+ d\n", n);
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

	count = _printf("% +d\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%+ d\n", n);
	_printf("count: %d\n\n", count);

	*/

	return (0);
}
