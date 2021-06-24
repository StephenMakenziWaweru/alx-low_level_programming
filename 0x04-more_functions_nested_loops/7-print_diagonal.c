#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times \ is printed
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			int j = 1;

			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
	else
		_putchar('\n');
}
