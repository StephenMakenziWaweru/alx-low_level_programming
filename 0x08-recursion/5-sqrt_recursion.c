#include "holberton.h"

/**
 * get_root - recurs until it finds the root of the given number.
 * @n: number whose sqrt is to be returned
 * @i: is the root
 *
 * Return: the square root.
 */

int get_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (get_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose sqrt is to be returned.
 *
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (get_root(n, 0));
}
