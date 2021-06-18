/*
 * File: 100-print_comb3.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints all combinantions of 2-digits followed by a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		
	}

	putchar('\n');

	return (0);
}
