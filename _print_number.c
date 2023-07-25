#include "main.h"

/**
 * _print_int - Print an integer to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */

void _print_int(va_list args, int *count)
{
	long int n = va_arg(args, long int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}

	_print_number((unsigned long int) n, count);
}

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
		n = -n;
	}

	_print_number((unsigned int) n, count);
}

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
	unsigned long int n = va_arg(args, unsigned long int);

	_print_number(n, count);
}

/**
 * _print_number - Print an unsigned integer to stdout.
 *
 * Recursively converts and prints the digits of 'n'.
 *
 * @n: The unsigned integer to convert and print.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_number(unsigned long int n, int *count)
{
	if (n / 10 != 0)
		_print_number(n / 10, count);

	_putchar('0' + n % 10);
	(*count)++;
}
