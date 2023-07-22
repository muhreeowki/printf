#include "main.h"
#include <stdio.h>

int main (void)
{
	printf("Normal printf\n");
	printf("Count: %d\n", printf("String: %z"));

	printf("\n");

	printf("Our printf\n");
	printf("Count: %d\n", _printf("String: %z"));
	return (0);
}
