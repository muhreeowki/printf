#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;

	printf("Normal printf: ");
	count = printf("%+k\n", 10);
	printf("\nNormal printf count: %d\n\n", count);

	printf("Our printf: ");
	count = _printf("%+k\n", 10);
	printf("\nNormal printf count: %d\n\n", count);
	return (0);
}
