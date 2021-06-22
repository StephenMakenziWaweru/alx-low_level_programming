#include "holberton.h"
#include <ctype.h>

/**
 *_islower - checks lowercase letters
 *@c: character to check if it is lowercase
 * Return: 1 if true and 0 if otherwise
 */
int _islower(int c)
{
	int k = islower(c);

	if (k != 0)
		return (1);
	else
		return (0);
}
