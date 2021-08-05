#include "main.h"

/**
 * print_binary - prints the binary rep of a number.
 * @n: number to print.
 */

void print_binary(unsigned long int n)
{
	int bin[SIZE], i = SIZE - 1;

	while (i >= 0)
	{
		bin[i] = n & 1;
		i--;
		n >>= 1;
	}

	for (i = 0; i < SIZE; i++)
	{
		if (bin[i] == 1)
			break;
	}

	if (i == SIZE)
		_putchar('0');
	else
	{
		for (; i < SIZE; i++)
			_putchar(bin[i] + '0');
	}
}


