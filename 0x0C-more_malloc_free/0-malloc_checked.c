#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: mem size in bytes.
 *
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
