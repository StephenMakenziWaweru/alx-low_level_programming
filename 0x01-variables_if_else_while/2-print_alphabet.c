/*
 * File: 2-print_alphabet.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * Main - Prints an alphabet in lowercase followed by a new line.
 *
 * Returns: Always 0. 
 */
int main(void)
{	char i;
	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}

