/*
 * File: 5-print_numberz.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - Prints all base 10 digits followed by newline..
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
	putchar('\n');

	return (0);
}
