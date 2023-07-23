#include "main.h"

/**
 * _print_bin - Print binary representation of an unsigned integer.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_bin(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	_print_binum(n, count);
}

/**
 * _print_binum - Recursively converts and prints the binary digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_binum(unsigned int n, int *count)
{
	if (n > 1)
		_print_binum(n / 2, count);

	_putchar('0' + n % 2);
	(*count)++;
}
