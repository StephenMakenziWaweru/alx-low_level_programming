#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 2772

/**
 * gen_rand - Generate a random alphanumeric ASCII code
 *
 * Return: void
*/
int gen_rand(void)
{
	int num;

	do {
	num = rand() % 100 + 47;
	} while (
		(num < 48 || num > 122) ||
		(num > 57 && num < 65) ||
		(num > 90 && num < 97));

	return (num);
}

/**
 * checksum - Sum all elements (ASCII codes) of a char array
 *
 * @arr: A char array
 * Return: Checksum of the array
*/
int checksum(char *arr)
{
	int acc = 0;
	int i = 0;

	while (arr[i] != '\0')
	{
		acc += arr[i];
		i++;
	}

	return (acc);
}

/**
 * fill - Fill a char array with random ASCII values
 * using a given checksum as a limit
 *
 * @arr: A char array
 * Return: void
*/
void fill(char *arr)
{
	int i = 0;

	while (checksum(arr) != LIMIT)
	{
		if (checksum(arr) < LIMIT)
		{
			arr[i] = gen_rand();
			i++;
		}
		else
		{
			arr[i] = 0;
			arr[i - 1] = 0;
			arr[i - 2] = 0;
			arr[i - 3] = 0;
			i -= 3;
		}
	}
}

/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
	char a[128];

	srand(time(NULL));
	fill(a);
	printf("%s", a);
	return (0);
}
