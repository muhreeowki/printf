#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	int *n;

	n = 0;


	printf("Normal printf: ");

	count = printf("hex: %x", n);
	printf("\nCount: %d\n\n", count);




	_printf("Our printf: ");

	count = _printf("hex: %x", n);
	_printf("\nCount: %d\n\n", count);

	return (0);
}
