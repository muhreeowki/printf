#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	char string[] = "hello";
	printf("Normal printf: ");

	count = printf("%c", string);

	printf("\nCount: %d\n\n", count);



	printf("Our printf: ");

	count = _printf("%c", string);

	printf("\nCount: %d\n", count);

	return (0);
}
