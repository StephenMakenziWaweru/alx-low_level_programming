#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of args passed.
 * @argv: array of args passed.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc);

	return (0);
}
