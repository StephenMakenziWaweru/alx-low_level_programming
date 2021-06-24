#include "holberton.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size: is the size of triangle
 */
void print_triangle(int size)
{
	int i = 0;

	if (size > 0)
	{
		while (i < size)
		{
			int j = size - 1;
			int k = i + 1;

			while (j > i)
			{
				_putchar(' ');
				j--;
			}

			while (k > 0)
			{
				_putchar('#');
				k--;
			}

			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
