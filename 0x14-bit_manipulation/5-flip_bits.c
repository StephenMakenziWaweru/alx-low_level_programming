#include "main.h"

/**
 * flip_bits - return the number of bits you would flip to get from one number
 * to another.
 * @n: number to be checked.
 * @m: the other number.
 *
 * Return: number of bit to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = sizeof(n) * 8;
	unsigned int bits = 0;

	while (mask--)
		bits += (n >> mask & 1) != (m >> mask & 1);

	return (bits);
}
