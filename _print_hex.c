#include "main.h"

/**
 * _puthex - Print hexadecimal representation of an unsigned integer.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */

void _print_hex_lower(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_print_hex(n, count, 0);
}

void _print_hex_upper(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_print_hex(n, count, 1);
}

void _print_hex(unsigned int n, int *count, int flag)
{
	if (n > 1)
		_print_hex(n / 16, count, flag);

	if (n % 16 >= 10 && n % 16 <= 16)
	{
		if (flag == 1)
			_putchar(55 + (int) (n % 16));
		else
			_putchar(87 + (int) (n % 16));
		(*count)++;
	}

	else if (n > 0)
	{
		_putchar('0' + n % 16);
		(*count)++;
	}
}
