/*
 * File: 4-print_alphabt.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints an alphabet in lowercase except q & e followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{	char i;
	i = 'a';
	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
