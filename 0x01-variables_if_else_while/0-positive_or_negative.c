/*
 * File: 0-positive_or_negative.c
 * Auth: Stephen Waweru
 */

#include "holberton.h"

/**
 *  Prints whether a random is positive or negative.
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	int n = i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
