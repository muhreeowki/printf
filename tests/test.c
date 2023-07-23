#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	int n;

	n = 0;

	printf("Normal printf: ");

	count = printf("Lower hex: %x", n);
	printf("\nCount: %d\n\n", count);

	count = printf("Upper hex: %X", n);
	printf("\nCount: %d\n\n", count);

	count = printf("Octal: %o", n);
	printf("\nCount: %d\n\n", count);

	count = printf("Unsigned: %u", n);
	printf("\nCount: %d\n\n", count);



	_printf("Our printf: ");

	count = _printf("Lower hex: %x", n);
	_printf("\nCount: %d\n\n", count);

	count = _printf("Upper hex: %X", n);
	_printf("\nCount: %d\n\n", count);

	count = _printf("Octal: %o", n);
	_printf("\nCount: %d\n\n", count);

	count = _printf("Unsigned: %u", n);
	_printf("\nCount: %d\n\n", count);

	return (0);
}
