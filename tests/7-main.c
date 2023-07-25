#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	unsigned long int n = 9;

	printf("__________Normal__________\n");

	printf("%+p\n", n);
	_printf("%+p\n", n);

	return (0);
}
