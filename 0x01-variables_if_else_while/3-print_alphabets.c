/*
 * File: 1-last_digit.c
 * Auth: Stephen Waweru
 */

#include <stdio.h>

/**
 * main - prints the the alphabet in lowercase then in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
		putchar('\n');

	return (0);
}
