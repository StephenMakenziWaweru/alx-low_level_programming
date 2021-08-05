#include "main.h"

/**
 * get_bit - returns the value of a bit at given index.
 * @n: integer whose bit at a given index is to be returned.
 * @index: location of bit.
 *
 * Return: bit at given index or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((n & mask) == mask ? 1 : 0);
}
