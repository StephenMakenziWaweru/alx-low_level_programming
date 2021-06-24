#include "holberton.h"

/**
 * _isdigit - checkes if a character is a digit or not
 *@c: character to be checked whether it is a digit or not.
 * Return: 1 if true or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
