#include "main.h"
#include <stdio.h>

int main (void)
{
	int n = 12345567;

	printf("Normal printf\n");
	printf("Count: %d\n", printf("Number %X\n", n));

	printf("\n");

	printf("Our printf\n");
	printf("Count: %d\n", _printf("Number %X\n", n));
	return (0);
}
