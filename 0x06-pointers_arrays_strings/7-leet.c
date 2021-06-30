#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i = 0;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		int j = 0;

		while (j < 5)
		{
			if (s[i] == letters[j] || s[i] == (letters[j] - 32))
				*(s + i) = code[j];
			j++;
		}
		i++;
	}

	return (s);
}
