#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 * followed by a new line.
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}

		i++;
		_putchar('\n');
	}
}
