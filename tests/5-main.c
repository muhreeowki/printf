#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	

	

	count = _printf("Our printf: \n% \n", +4);
	_printf("\nOur printf count: %d\n\n", count);

	count = printf("Normal printf: \n% \n", +4);
	printf("\nNormal printf count: %d\n\n", count);
	return (0);
}
