#include "holberton.h"

/**
 * _isupper - checkes if a character is uppercase or not
 *@c: character to be checked whether it is uppercase or not.
 * Return: 1 if true or 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}

