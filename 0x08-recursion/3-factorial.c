#include "holberton.h"

/**
 * factorial - returns the factorial of a given number;
 * @n: number whose factorial is to be determined
 *
 * Return: factorial of number or -1 if n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
