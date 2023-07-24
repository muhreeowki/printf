#include "main.h"
#include <stdint.h>

/**
 * _print_pointer - Print an address to stdout.
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _print_pointer(va_list args, int *count)
{
	void *ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		_puts("(nil)");
		(*count) += 5;
		return;
	}

	_putchar('0');
	_putchar('x');

	(*count) += 2;

	_print_long_hex((unsigned long int) ptr, count, 1);
}
