#include "main.h"

/**
 * print_binary - prints the binary rep of a number.
 * @n: number to print.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	char start_zero = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		if ((n & mask) == mask)
		{
			start_zero = 1;
			_putchar('1');
		}
		else if (start_zero == 1 || mask == 1)
			_putchar('0');
		mask >>= 1;
	}
}

