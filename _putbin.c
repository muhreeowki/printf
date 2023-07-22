#include "main.h"

void _putbin(unsigned int n, int *count)
{
	if (n > 1)
		_putbin(n / 2, count);

	_putchar('0' + n % 2);
	(*count)++;
}
