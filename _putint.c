#include "main.h"

/**
 * _putint - prints a number to stdout
 *
 * @n: number to print
 */

void _putint(int n, int *count)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
	(*count)++;
    }

    _putuint(n, count);
}

