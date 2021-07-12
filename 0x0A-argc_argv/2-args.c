#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments it recieves.
 * @argc: number of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
