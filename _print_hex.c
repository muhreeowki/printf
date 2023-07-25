#include "main.h"

/**
 * _print_hex_lower - Print lowercase hexadecimal rep of an unsigned integer.
 *
 * @args: Variable args list containing the unsig int to convert and print.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_hex_lower(va_list args, int *count)
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
 * _print_hex_upper - Print uppercase hexadecimal rep of an unsigned integer.
 *
 * @args: Variable args list containing the unsig int to convert and print.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_hex_upper(va_list args, int *count)
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

/**
 * _print_hex - Print hexadecimal representation of an unsigned integer.
 *
 * Recursively converts and prints the hexadecimal digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 * @flag:to indicate whether to print upper or lowercase hexadecimal chars.
 *
 * Return: None (void).
 */
void _print_hex(unsigned long n, int *count, int flag)
{
	if (n / 16 != 0)
		_print_hex(n / 16, count, flag);

	if (n % 16 < 10)
	{
		_putchar('0' + (n % 16));
		(*count)++;
	}

	else
	{
		if (flag == 1)
			_putchar(55 + (int) (n % 16));
		else
			_putchar(87 + (int) (n % 16));
		(*count)++;
	}
}
