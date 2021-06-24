#include "holberton.h"

/**
 * print_square - draws a square in the terminal
 * @size: the size of the square
 */
void print_square(int size)
{
	int i = 0;

	if (size > 0)
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
