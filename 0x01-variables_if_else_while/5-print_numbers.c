/*
 * File: 5-print_numbers.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * Main - Prints all base 10 digits followed by a new line.
 *
 * Returns: Always 0. 
 */
int main(void)
{	
	int i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
