#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	int n = 123456789;

	printf("Normal printf: ");
	count = printf("%X", n);

	printf("\nCount: %d\n\n", count);



	_printf("Our printf: ");

	count = _printf("%X", n);

	_printf("\nCount: %d\n", count);

	return (0);
}
