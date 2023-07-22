#include "main.h"
#include <stdio.h>

int main (void)
{
	printf("Normal printf\n");
	printf("Count: %d\n", printf("%s", ""));

	printf("\n");

	printf("Our printf\n");
	printf("Count: %d\n", _printf("%s", ""));
	return (0);
}
