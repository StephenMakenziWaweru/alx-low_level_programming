#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	while (n != 0)
	{
		i = i * 10;
		i = i + n % 10;
		n = n / 10;
	}
	while (i != 0)
	{
		_putchar((i % 10) + '0');
		i = i / 10;
	}
}
