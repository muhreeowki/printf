#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;
	char string[] = "Hello%";
	printf("Normal printf: ");

	count = printf("%z", string);

	printf("\nCount: %d\n\n", count);



	printf("Our printf: ");

	count = _printf("%z", string);

	printf("\nCount: %d\n", count);

	return (0);
}
