/*
 * File: 7-print_tebahpla.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * Main - Prints reversed alphabet in lowercase followed by a new line.
 *
 * Returns: Always 0. 
 */
int main(void)
{	char i;
	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
