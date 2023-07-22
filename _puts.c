#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (1);
}
