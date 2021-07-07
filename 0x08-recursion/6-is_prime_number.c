#include "holberton.h"

/**
 * check_prime - iterates to check if prime
 * @n: number to be checked.
 * @i: iterative divisor.
 *
 * Return: 1 if true else 0.
 */

int check_prime(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i)
		return (check_prime(n, i + 2));
	return (0);
}

/**
 * is_prime_number - checks if number is prime or not.
 * @n: number to be checked
 *
 * Return: 1 if true else 0.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0);
	return (check_prime(n, 3));
}
