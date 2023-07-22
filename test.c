#include "main.h"
#include <stdio.h>

int main (void)
{
	printf("Normal printf ");
	printf("Count: %d\n", printf("%c", 'H'));

	printf("Our printf ");
	printf("Count: %d\n", _printf("%c", 'H'));
	return (0);
}
