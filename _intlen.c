#include "main.h"

/**
 * count_digits - Count the number of digits in an integer.
 *
 * @number: The input integer.
 *
 * Return: The number of digits in the integer.
 */
int _intlen (int number)
{
    int length = 0;

    if (number == 0)
    {
        return 1; // Special case for handling zero
    }

    if (number < 0)
    {
        number = -number; // Handle negative numbers by making them positive
    }

    while (number > 0)
    {
        number /= 10;
        length++;
    }

    return length;
}

