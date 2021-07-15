#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: - pointer to previous mem block.
 * @old_size: size of previous mem block.
 * @new_size: size of new mem block.
 *
 * Return: pointer to new size of mem block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL, *p_tmp = NULL;

	if (!new_size)
		return (free(ptr), NULL);

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		p = p_tmp = malloc(new_size);
		if (!p)
			return (NULL);
	}

	old_size = old_size < new_size ? old_size : new_size;

	if (ptr)
	{
		while (old_size--)
			p_tmp[old_size] = ((char *)ptr)[old_size];
		free(ptr);
	}
	else
		return (p);
	return (p);
}


