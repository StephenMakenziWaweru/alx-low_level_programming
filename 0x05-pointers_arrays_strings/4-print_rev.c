#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
	unsigned long int i;

	for (i = (strlen(s) + 1); i > 0; i--)
	{
		_putchar(*(s + i - 1));
	}

	_putchar('\n');
}
