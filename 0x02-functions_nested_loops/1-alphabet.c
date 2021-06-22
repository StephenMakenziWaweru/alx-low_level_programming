/*
 * File: 1-alphabet.c
 * Auth: Stephen Waweru
 */

#include "holberton.h"

/**
 * print_alphabet - Prints lowercase alphabet letters followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
