#include "main.h"

/**
 * _print_space - This function handles space flags.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_space(va_list args, int *count)
{
	int n = va_arg(args, int);

	if (n >= 0)
	{
		_putchar(' ');
		(*count)++;
	}

	else
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}

	_print_number((unsigned int) n, count);
}
