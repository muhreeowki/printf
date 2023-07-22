#include "main.h"

/**
 * _putunsint - prints a number to stdout
 *
 * @n: number to print
 */

void _putunsint(unsigned int n)
{
	if (n / 10 != 0)
	{
		_putint(n / 10);
	}
	_putchar('0' + n % 10);
}

