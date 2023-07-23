#include "main.h"
#include <stdio.h>

int main (void)
{
	int count;

	_printf("Our printf:\n");

	count = _printf("%S", "Best\nSchool");
	_printf("Count: %d\n\n", count);

	return (0);
}
