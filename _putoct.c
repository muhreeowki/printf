#include "main.h"
/**
 * _putoct - Print octal representation of an unsigned integer.
 *
 * Recursively converts and prints the binary digits of 'n'.
 *
 * @n: Unsigned integer to convert and print in binary form.
 * @count: Pointer to the count of characters printed so far.
 *
 * Return: None (void).
 */
void _putoct(unsigned int n, int *count)
{
        if (n > 1)
                _putbin(n / 8, count);

        _putchar('0' + n % 8);
        (*count)++;
}
