#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int count;

	int n = INT_MAX;

	printf("__________Normal__________\n");
	count = printf("%ld\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hd\n", n);
	printf("count: %d\n\n", count);

	count = printf("%lx\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hx\n", n);
	printf("count: %d\n\n", count);

	count = printf("%lo\n", n);
	printf("count: %d\n\n", count);

	count = printf("%ho\n", n);
	printf("count: %d\n\n", count);

	count = printf("%lu\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hu\n", n);
	printf("count: %d\n\n", count);

	count = printf("%lX\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hX\n", n);
	printf("count: %d\n\n", count);

	printf("__________Our__________\n");
	count = _printf("%ld\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%hd\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%lx\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%hx\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%lo\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%ho\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%lu\n", n);
	printf("count: %d\n\n", count);

	count = _printf("%hu\n", n);
	printf("count: %d\n\n", count);

	count = _printf("%lX\n", n);
	printf("count: %d\n\n", count);

	count = _printf("%hX\n", n);
	printf("count: %d\n\n", count);


	return (0);
}
