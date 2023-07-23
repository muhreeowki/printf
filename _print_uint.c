#include "main.h"

/**
 * _print_uint - Print an unsigned integer to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */

void _print_uint(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_print_number(n, count);
}

