#include "main.h"
#include <stdint.h>

void _print_long_hex(unsigned long int n, int *count, int flag);

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
	unsigned long int num = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');

	(*count) += 2;
	
	if (sizeof(void *) == 8)
	{
		_putchar('7');
		_putchar('f');
		_putchar('f');

		(*count) += 3;

		_print_long_hex(num, count, 0);
	}

	else
		_print_hex(num, count, 0);
}

void _print_long_hex(unsigned long int n, int *count, int flag)
{
	if (n >= 1)
		_print_hex(n / 16, count, flag);

	if (n % 16 >= 10 && n % 16 <= 15)
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
