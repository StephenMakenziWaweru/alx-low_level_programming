/*
 * File: 2-print_alphabet_x10.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints lowercase alphabet letters 10x followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char j = 0;

	while (j < 10)
	{
		char i = 'a';

        	while (i <= 'z')
        	{
                	putchar(i);
                	i++;
        	}
		j++;
		putchar('\n');
	}

	return (0);
}
