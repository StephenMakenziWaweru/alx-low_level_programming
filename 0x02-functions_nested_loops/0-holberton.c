/*
 * File: 0-holberton.c
 * Auth: Stephen Waweru
 */

#include "holberton.h"

/**
 * main - Prints "Holberton" followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char i[] = "Holberton";
	int j = 0;

	while (j <= sizeof(i))
	{
		_putchar(i[j]);
		j++;
	}
	_putchar('\n');

	return (0);
}

