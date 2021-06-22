/*
 * File: 1-alphabet.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints lowercase alphabet letters followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
