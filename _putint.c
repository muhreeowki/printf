#include "main.h"

/**
 * _putint - prints a number to stdout
 *
 * @n: number to print
 */

void _putint(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        _putint(n / 10);
    }

    _putchar('0' + n % 10);
}

