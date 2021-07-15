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
	har *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
