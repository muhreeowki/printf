#include "main.h"

/**
 * _puts - writes the string str to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (1);
}
