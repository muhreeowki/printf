#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	void *n;

	n = &count;

	count = _printf("Our printf: \n%p\n", n);
	_printf("\nOur printf count: %d\n\n", count);

	count = printf("Normal printf: \n%p\n", n);
	printf("\nNormal printf count: %d\n\n", count);
	return (0);
}
