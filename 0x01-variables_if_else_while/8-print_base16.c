/*
 * File: 8-print_numbers.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints all base 16 digits followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
