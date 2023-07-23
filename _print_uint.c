#include "main.h"

/**
 * _putuint - prints a number to stdout
 *
 * @n: number to print
 */

void _print_uint(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_print_number(n, count);
}

