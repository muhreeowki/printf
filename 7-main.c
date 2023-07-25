#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int count;

	unsigned long int n = 192312;

	printf("__________Normal__________\n");
	count = printf("%ld\n", n);
	printf("count: %d\n\n", count);

	count = printf("%li\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hd\n", n);
	printf("count: %d\n\n", count);

	count = printf("%hi\n", n);
	printf("count: %d\n\n", count);


	printf("__________Our__________\n");
	count = _printf("%ld\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%li\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%hd\n", n);
	_printf("count: %d\n\n", count);

	count = _printf("%hi\n", n);
	_printf("count: %d\n\n", count);

	return (0);
}
