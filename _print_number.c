#include "main.h"
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
void _print_number(unsigned int n, int *count)
{
	if (n / 10 != 0)
		_print_number(n / 10, count);

	_putchar('0' + n % 10);
	(*count)++;
}
