#include "main.h"

/**
 * _print_sint - Print a signed integer to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_sint(va_list args, int *count)
{
	int n = va_arg(args, int);

	if (n >= 0)
	{
		_putchar('+');
		(*count)++;
	}

	else
	{
		_putchar('-');
		(*count)++;
	}

	_print_number((unsigned int) n, count);
}
