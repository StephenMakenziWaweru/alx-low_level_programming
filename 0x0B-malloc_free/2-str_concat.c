#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0, len2 = 0, len;

	while (s1 && *s1++)
		len1++;
	while (s2 && *s2++)
		len2++;

	len = len1 + len2;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr += len1 + len2;
	*ptr = '\0';

	for (s2--; len2--;)
		*--ptr = *--s2;
	for (s1--; len1--;)
		*--ptr = *--s1;

	return (ptr);
}
