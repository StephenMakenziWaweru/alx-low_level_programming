#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times _ is printed
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
