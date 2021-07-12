#include <stdio.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: number of items passed
 * @argv: array containing the items passed
 *
 * Return: 0.
 */

int main(int argc, char* argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}

	return (0);
}
