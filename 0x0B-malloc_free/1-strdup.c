#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contatins a copy of the string given as a parameter.
 * @str: string to be copied.
 *
 * Return: pointer to space allocated.
 */

char *_strdup(char *str)
{
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*str++)
			len++;

		p = malloc((sizeof(*str) * len) + 1);

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			while (len >= 0)
			{
				p[len] = *--str;
				len--;
			}
		}
	}
	return (p);
}
