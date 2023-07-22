#include "main.h"

/**
 * _intlen - Count the number of digits in an integer.
 *
 * @number: The input integer.
 *
 * Return: The number of digits in the integer.
 */
int _intlen (int n)
{
    int length = 0;

    if (n == 0)
        return (1);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        n /= 10;
        length++;
    }

    return (length);
}

