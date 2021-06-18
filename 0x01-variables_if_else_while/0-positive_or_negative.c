/*
 * File: 0-posotive_or_negative.c
 * Auth: Stephen Waweru
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Prints whether a random is positive or negative.
 *
 * Returns: Always 0.
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else	
		printf("%d is negative\n", n);

	return (0);
}
