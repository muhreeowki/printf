#include "main.h"
#include <stdio.h>

int main (void)
{
	int n = -539338646;

	printf("Normal printf\n");
	printf("Count: %d\n", printf("Number %d\n", n));

	printf("\n");

	printf("Our printf\n");
	printf("Count: %d\n", _printf("Number %d\n", n));
	return (0);
}
