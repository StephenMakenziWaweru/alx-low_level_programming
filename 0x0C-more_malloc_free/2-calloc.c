#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: no. of elements.
 * @size: size of each element.
 *
 * Return: pointer to the location or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	size *= nmemb;

	while (size--)
		*(ptr + size) = 0;

	return (ptr);
}
