#include "holberton.h"

/**
 * main - multiplies two numbers.
 * @argc: number of arguments recieved.
 * @argv: array of arguments
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	else 
		printf("Error\n");

	return (0);
}
