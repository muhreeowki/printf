#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;

	printf("Normal printf: ");

	count = printf("hello%", 1);

	printf("\nCount: %d\n\n", count);



	_printf("Our printf: ");

	count = _printf("hello%", 1);

	printf("\nCount: %d\n", count);

	return (0);
}
