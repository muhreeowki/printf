#include "main.h"

/**
 * octal_hash - this function handles #o flag
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void octal_hash(va_list args, int *count)
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


/**
 * lowerx_hash - this function handles #x flag
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void lowerx_hash(va_list args, int *count)
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


/**
 * upperx_hash - this function handles #X flag
 *
 * @args: Variable arguments list containing additional arguments.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void upperx_hash(va_list args, int *count)
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
