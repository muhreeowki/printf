#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	(*count)++;
}
