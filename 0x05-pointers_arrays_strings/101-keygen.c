#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid passwords
 * @srand: El mayordomo pone a girar la diana
 * @rand: rnad
 * @time: Time
 * Return: test
 */

int main(void)
{
	srand(time(NULL));

	int test = rand();

	printf("%d\n", test);

	return (0);
}
