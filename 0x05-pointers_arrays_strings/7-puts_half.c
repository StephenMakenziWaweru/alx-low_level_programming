#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	unsigned long int i;
	unsigned long int n = strlen(str);

	for (i = (n - 1) / 2; i < (n - 1); i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
