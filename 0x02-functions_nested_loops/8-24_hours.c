#include "holberton.h"

/**
 * jack_bauer - prints every minute of Jack from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int min = 0;

		while (min < 60)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}

			_putchar('\n');
			min++;
		}

		h++;
	}
}
