/*
 * File: 7-print_tebahpla.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints reversed alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
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
