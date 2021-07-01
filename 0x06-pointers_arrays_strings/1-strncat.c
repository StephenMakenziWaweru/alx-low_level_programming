#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: Number of bytes to copy from src
 *
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	for (m = 0; dest[m] != '\0'; m++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[m + i] = src[i];
	dest[m + i] = '\0';

	return (dest);
}
