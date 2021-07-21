#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calls different functions to do the operation needed.
 * @argc: no. of args.
 * @argv: args vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int result, a, b;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = calc(a, b);
	printf("%d\n", result);

	return (0);
}
