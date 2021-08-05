#include "main.h"

/**
 * set_bit - sets the value of a bt to a 1 at a given index.
 * @n: pointer to the number.
 * @index: location of bit to be set.
 *
 * Return: 1 on success or -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask <<= index;
	(*n |= mask);

	return (1);
}
