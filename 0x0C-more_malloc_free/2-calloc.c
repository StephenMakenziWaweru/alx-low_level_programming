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
	char *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		ptr[nmemb] = 0;
	return (ptr);
}
