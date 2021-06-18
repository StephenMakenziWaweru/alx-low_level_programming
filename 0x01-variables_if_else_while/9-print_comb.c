/*
 * File: 9-print_comb.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * Main - Prints all combinantions of digits followed by newline.
 *
 * Returns: Always 0. 
 */
int main(void)
{	
	int i;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9) 
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
