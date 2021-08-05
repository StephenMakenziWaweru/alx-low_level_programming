#include "main.h"

/**
 * _pow - returns the value of a number raised to some power.
 * @base: base.
 * @power: raised to.
 *
 * Return: result of a number raised to a power.
 */
int _pow(int base, int power)
{
	int result = 1;

	while (power)
	{
		result *= base;
		power--;
	}
	return (result);
}
/**
 * binary_to_uint - converts biary no. to an unsigned int.
 * @b: pointer to binary no.
 *
 * Return: int or 0 on failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, uint = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] >= '0' && b[i] <= '1')
			i++;
		else
			return (0);
	}

	while (b[j] != '\0')
	{
		if (b[j] >= '1' && b[j] <= '1')
			uint += _pow(2, (i - 1));
		i--;
		j++;
	}

	return (uint);
}
