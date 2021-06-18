#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main - prints the last digit of a random number and some comparisons
 *
 * Returns: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld = n % 10;
		
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last difit of %d is %d and is 0\n", n, ld);
	else 
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	
	return (0);
}
