#include "main.h"






void octal_hash(va_list args ,int *count)
{
	_putchar('0');
	
	(*count)++;
	_print_oct(args, count);
}










void lowerx_hash(va_list args ,int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	
	_putchar('0');
	_putchar('x');

	(*count)+=2;
	
	_print_hex(n, count, 0);
}








void upperx_hash(va_list args ,int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	
	_putchar('0');
	_putchar('X');
	(*count)+=2;
	_print_hex(n, count, 1);
}

