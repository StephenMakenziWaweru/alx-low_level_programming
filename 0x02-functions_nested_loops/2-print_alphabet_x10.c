/*
 * File: 2-print_alphabet_x10.c
 * Auth: Stephen Waweru
 */

#include "holberton.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet letters 10x followed by a
 * new line
 *
 * Return: success 1.
 */
void print_alphabet_x10(void)
{
	char j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
