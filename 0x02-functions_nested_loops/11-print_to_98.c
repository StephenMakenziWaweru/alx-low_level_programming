#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the natural numbers from n to 98
 *
 * @n: is the number passed to the function
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if  (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	printf("\n");
}
