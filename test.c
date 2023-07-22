#include "main.h"
#include <stdio.h>

int main (void)
{
	unsigned int n = 42;
	printf("Count: %i\n", _printf("Number %b\n", n));
	return (0);
}
