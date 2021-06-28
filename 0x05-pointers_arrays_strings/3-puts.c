#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(*(str + i));
	_putchar('\n');
}
