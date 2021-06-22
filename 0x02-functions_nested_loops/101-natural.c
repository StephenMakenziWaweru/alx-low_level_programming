#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * followed  by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0, sum = 0;

	while (n < 1024)
	{
		/* Check if multiple of 3 or 5*/
		int mul_3 = n % 3;
		int mul_5 = n % 5;

		if (mul_3 == 0 || mul_5 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
