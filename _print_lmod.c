#include"main.h"

/**
 * _print_long_oct - Print a long octal to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_long_oct(va_list args, int *count)
{
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_get_oct(n, count);
}


/**
 * _print_long_hex_lower - Print a long octal to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_long_hex_lower(va_list args, int *count)
{
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_print_hex(n, count, 0);
}


/**
 * _print_long_hex_upper - Print a long octal to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_long_hex_upper(va_list args, int *count)
{
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_print_hex(n, count, 1);
}
