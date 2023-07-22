#include "main.h"
#include <stdio.h>

int main (void)
{
	unsigned int n = 255;

	printf("Normal Printf:\n");
	printf("Count: %i\n\n", printf("Number %X\n", n));
	printf("Our Printf:\n");
	printf("Count: %i\n\n", _printf("Number %X\n", n));
	return (0);
}
