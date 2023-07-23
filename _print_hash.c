#include "main.h"

void octal_hash(va_list args ,int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n > 0)
	{
		_putchar('0');
		(*count)++;

		_get_oct(n, count);
	}

	else
	{
		_putchar('0');
		(*count)++;
	}

}

void lowerx_hash(va_list args ,int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	
	if (n > 0)
	{
		_putchar('0');
		_putchar('x');
		(*count) += 2;

		_print_hex(n, count, 0);
	}

	else
	{
		_putchar('0');
		(*count)++;
	}
	
}

void upperx_hash(va_list args ,int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	
	if (n > 0)
	{
		_putchar('0');
		_putchar('X');
		(*count) += 2;

		_print_hex(n, count, 1);
	}

	else
	{
		_putchar('0');
		(*count)++;
	}
}

