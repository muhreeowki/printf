#include "main.h"
#include <stdio.h>

int main (void)
{
	void *n;
	int count;

	n = &count;

	printf("Normal printf: ");

	count = printf("%p", n);
	printf("\nCount: %d\n\n", count);


	_printf("Our printf: ");

	count = _printf("%p", n);
	_printf("\nCount: %d\n\n", count);
	return (0);
}
