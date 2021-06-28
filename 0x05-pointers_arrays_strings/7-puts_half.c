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

	if (n % 2 == 0)
	{

		for (i = n / 2; i < n; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = (n + 1) / 2; i < n; i++)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
