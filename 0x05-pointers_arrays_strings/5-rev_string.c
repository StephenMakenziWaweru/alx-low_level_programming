#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	unsigned long int i;
	unsigned long int j;
	int k = 0, l = 0;
	char c[1000];

	for (i = strlen(s) + 1; i > 0; i--)
	{
		*(c + k) = *(s + i - 2);
		k++;
	}
	for (j = 0; j < strlen(s); j++)
	{
		*(s + j) = *(c + l);
		l++;
	}
}
