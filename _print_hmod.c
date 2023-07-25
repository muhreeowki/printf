#include "main.h"

/**
 * _print_short_int - Print a short integer to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_short_int(va_list args, int *count)
{
	short int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}

	_print_number((unsigned short)n, count);
}

/**
 * _print_short_uint - Print a short unsigned integer to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_short_uint(va_list args, int *count)
{
	unsigned short n = va_arg(args, int);

	_print_number((unsigned short) n, count);
}

/**
 * _print_short_oct - Print a short octal to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_short_oct(va_list args, int *count)
{
	unsigned short n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_get_oct((unsigned short) n, count);
}

/**
 * _print_short_hex_lower - Print a short lower hex to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_short_hex_lower(va_list args, int *count)
{
	unsigned short n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_print_hex((unsigned short) n, count, 0);
}

/**
 * _print_short_hex_upper - Print a short upper hex to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_short_hex_upper(va_list args, int *count)
{
	unsigned short n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_print_hex((unsigned short) n, count, 1);
}

