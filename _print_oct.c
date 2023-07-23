#include "main.h"
/**
 * _putoct - Print octal representation of an unsigned integer.
 *
 * Recursively converts and prints the binary digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_oct(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_get_oct(n, count);
}


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
