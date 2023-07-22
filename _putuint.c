#include "main.h"

/**
 * _putuint - prints a number to stdout
 *
 * @n: number to print
 */

void _putuint(unsigned int n, int *count)
{
	if (n / 10 != 0)
	{
		_putuint(n / 10, count);
	}
	_putchar('0' + n % 10);
	(*count)++;
}

