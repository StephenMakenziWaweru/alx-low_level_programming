#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: is the size of the array.
 * @c: is the character to initialize with.
 *
 * Return: pointer to array or NULL in case of failure.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(*ptr) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
		}
	}
	return (ptr);
}
