#include "main.h"
/**
 * _putbin - Print binary representation of an unsigned integer.
 *
 * Recursively converts and prints the binary digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _putbin(unsigned int n, int *count)
{
	if (n > 1)
		_putbin(n / 2, count);

	_putchar('0' + n % 2);
	(*count)++;
}
