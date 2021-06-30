#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*(char *)s1 - *(char *)s2);
}
