#include "main.h"
#include <stdio.h>

int main (void)
{
	
	int count;
	long unsigned int n=9800;

	

	printf("Normal printf: ");

	count = printf("%ld", n);
	printf("\nCount: %d\n\n", count);


	_printf("Our printf: ");

	count = _printf("%ld", n);
	_printf("\nCount: %d\n\n", count);
	return (0);
}
