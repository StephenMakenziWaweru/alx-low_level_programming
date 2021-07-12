#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int sum, i = 1, j, a = 1;

	/* loop to see if all args are numbers */

	if (argc > 1)
	{
		while (i < argc)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}

			i++;
		}
		while (a < argc)
		{
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);

	}
	else
		printf("0\n");

	return (0);
}
