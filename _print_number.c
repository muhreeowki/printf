#include "main.h"

void _print_number(unsigned int n, int *count)
{
	if (n / 10 != 0)
		_print_number(n / 10, count);

	_putchar('0' + n % 10);
	(*count)++;
}
