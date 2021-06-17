/*
 * File : 6-size.c 
 * Auth: Stephen Waweru <stevomakenzi@gmail.com>
 */

#include <stdio.h>

/**
 * main - prints the sizes of various data types.
 * Returns 0.
 */
 
int main(void)
{
	char i;
	int a;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %zu byte(s)\n",sizeof(i));
	printf("Size of a int: %zu byte(s)\n",sizeof(a));
	printf("Size of a long int: %zu byte(s)\n",sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n",sizeof(c));
	printf("Size of a float: %zu byte(s)\n",sizeof(d));

	return (0);
}
