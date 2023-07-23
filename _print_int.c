#include "main.h"

/**
 * _print_int - prints a number to stdout
 *
 * @n: number to print
 */

void _print_int(va_list args, int *count)
{
	int n = va_arg(args , int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}

	_print_number((unsigned int) n, count);
}

