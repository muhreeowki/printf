#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	int *n;

	n = &count;

	printf("Normal printf: ");

	count = printf("%#X", (void *)n);
	printf("\nCount: %d\n\n", count);


	_printf("Our printf: ");

	count = _printf("%r", "Hello World");
	_printf("\nCount: %d\n\n", count);

	count = _printf("%R", "Hello World");
	_printf("\nCount: %d\n\n", count);
	return (0);
}