#include "holberton.h"

/**
 * puts2 - prints every character of string
 *
 * @str: character to be printed
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i <= strlen(str); i+=2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
