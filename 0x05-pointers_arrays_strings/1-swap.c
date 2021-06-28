#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
