#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			while (num % i == 0)
			{
				num = num / i;
			}
		}
	}

	printf("%ld\n", i - 1);

	return (0);
}
