#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints its opcodes.
 * @argc: no. of args.
 * @argv: arg vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int bytes;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);
	if (bytes < 0)
		printf("Erro\n"), exit(2);

	while (bytes--)
	{
		printf("%02hhx", *ptr++, b ? " " : "\n");
	}

	return (0);
}
