#include "holberton.h"

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int amount;

	int cents = 0;

	if (argc > 1)
	{
		amount = atoi(argv[1]);

		if (amount < 0)
			printf("0\n");
		else
		{
			cents = amount / 25;

			if ((amount % 25) != 0)
				cents += (amount % 25) / 10;

			if (((amount % 25) % 10) != 0)
				cents += ((amount % 25) % 10) / 5;
			if ((((amount % 25) % 10) % 5) != 0)
				cents += (((amount % 25) % 10) % 5) / 2;
			if (((((amount % 25) % 10) % 5) % 2) != 0)
				cents += ((((amount % 25) % 10) % 5) % 2) / 1;
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
