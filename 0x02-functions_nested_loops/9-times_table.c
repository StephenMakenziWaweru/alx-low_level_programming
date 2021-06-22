#include "holberton.h"

/**
 * times_table - prints the 9 times table starting from 0.
 */
void times_table(void)
{
	int column = 0;

	while (column <= 9)
	{
		int row = 0;

		while (row <= 9)
		{
			int result = row * column;

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (row < 9)
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

