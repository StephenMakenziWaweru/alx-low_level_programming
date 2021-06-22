#include "holberton.h"

/**
 * print_times_table - prints the n times table starting from 0.
 * @n: is the input value
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int column = 0;

		while (column <= n)
		{
			int row = 0;

			while (row <= n)
			{
				int result = row * column;

				if (row == 0)
					_putchar(result + '0');

				else if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result <= 99)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}

				if (row < n)
				{
				_putchar(',');
				_putchar(' ');
				}

				row++;
			}
			_putchar('\n');
			column++;
		}
	}
}
