#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: position of bit.
 * @n: pointer to the integer.
 *
 * Return: 1 on success or -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1) || !n)
		return (-1);
	mask <<= index;

	*n &= (~mask);

	return (1);
}
