#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	unsigned long int num = ULONG_MAX;

	void *n = &num;

	/*("__________Normal__________\n");*/

	printf("%+ p\n", n);
	_printf("%+ p\n", n);

	/*
	printf("%li\n", n);
	_printf("%li\n", n);

	printf("%hi\n", n);
	_printf("%hi\n", n);

	printf("%ld\n", n);
	_printf("%ld\n", n);

	printf("%hd\n", n);
	_printf("%hd\n", n);

	printf("%lx\n", n);
	_printf("%lx\n", n);

	printf("%hx\n", n);
	_printf("%hx\n", n);

	printf("%lo\n", n);
	_printf("%lo\n", n);

	printf("%ho\n", n);
	_printf("%ho\n", n);

	printf("%lu\n", n);
	_printf("%lu\n", n);

	printf("%hu\n", n);
	_printf("%hu\n", n);

	printf("%lX\n", n);
	_printf("%lX\n", n);

	printf("%hX\n", n);
	_printf("%hX\n", n);

	*/

	return (0);
}
