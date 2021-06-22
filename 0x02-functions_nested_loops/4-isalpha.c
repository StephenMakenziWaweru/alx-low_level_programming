#include "holberton.h"
#include <ctype.h>

/**
 *_isalpha - checks if it is an alphabet
 *@c: character to check if it is aphabetic
 * Return: 1 if true and 0 if otherwise
 */
int _isalpha(int c)
{
	int k = isalpha(c);

	if (k != 0)
		return (1);
	else
		return (0);
}
