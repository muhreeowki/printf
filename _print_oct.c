#include "main.h"
/**
 * _print_oct - Print octal representation of an unsigned integer.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_oct(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}

	else
		_get_oct(n, count);
}
/**
 * _get_oct - Recursively converts and prints the octal digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in octal form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */

void _get_oct(unsigned int n, int *count)
{
	if (n > 1)
		_get_oct(n / 8, count);

	if (n > 0)
	{
		_putchar('0' + n % 8);
		(*count)++;
	}
}
