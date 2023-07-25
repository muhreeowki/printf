#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
<<<<<<< HEAD
	unsigned long int n = 9;
=======
	int n = 7333;
	int count;
>>>>>>> 380c3abc02b43ed2e941017ff02e89804850c6b0

/*	printf("__________Normal__________\n");*/

<<<<<<< HEAD
	printf("%+p\n", n);
	_printf("%+p\n", n);
=======
	
	count = printf("%+i\n", n);
	printf("count: %d\n", count);

	count = _printf("%+i\n", n);
	_printf("count: %d\n", count);

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

>>>>>>> 380c3abc02b43ed2e941017ff02e89804850c6b0

	return (0);
}
