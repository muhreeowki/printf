#include "main.h"

/**
 * _printnum - prints a number to stdout
 *
 * @n: number to print
 */

void _printnum(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        _printnum(n / 10);
    }

    _putchar('0' + n % 10);
}

