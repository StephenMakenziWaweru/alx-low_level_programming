/*
 * File: 101-print_comb4.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints all combinantions of 3-digits followed by a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <=9; i++) 
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
