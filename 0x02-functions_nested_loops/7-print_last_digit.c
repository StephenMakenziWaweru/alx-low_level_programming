#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 *@n: is the number whose last digit is to be printed.
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int k = n % 10;

	if (k < 0)
		k *= -1;
	_putchar(k + '0');

	return (k);
}
