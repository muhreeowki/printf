#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	

	

	count = _printf("Our printf: \n% d\n", -98989);
	_printf("\nOur printf count: %d\n\n", count);

	count = printf("Normal printf: \n% d\n", -98989);
	printf("\nNormal printf count: %d\n\n", count);
	return (0);
}
