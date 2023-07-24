#include "main.h"
 

void _print_short_int(va_list args, int *count)
{
    short int n = va_arg(args, int);

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        (*count)++;
    }

    _print_number((unsigned int)n, count);
}




void _print_short_uint(va_list args, int *count)
{
    unsigned short int n = va_arg(args, unsigned int);

    _print_number(n, count);
}




void _print_short_oct(va_list args, int *count)
{
    unsigned short int n = va_arg(args, unsigned int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _get_oct(n, count);
}




void _print_short_hex_lower(va_list args, int *count)
{
    unsigned short int n = va_arg(args, unsigned int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _print_hex(n, count, 0);
}




void _print_short_hex_upper(va_list args, int *count)
{
    unsigned short int n = va_arg(args, unsigned int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _print_hex(n, count, 1);
}

