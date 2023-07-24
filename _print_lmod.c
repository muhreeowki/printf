#include"main.h"








void _print_long_oct(va_list args, int *count)
{
    unsigned long int n = va_arg(args, unsigned long int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _get_oct(n, count);
}



void _print_long_hex_lower(va_list args, int *count)
{
    unsigned long int n = va_arg(args, unsigned long int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _print_hex(n, count, 0);
}




void _print_long_hex_upper(va_list args, int *count)
{
    unsigned long int n = va_arg(args, unsigned long int);

    if (n == 0)
    {
        _putchar('0');
        (*count)++;
    }
    else
        _print_hex(n, count, 1);
}

