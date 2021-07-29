#include <stdio.h>

/**
 * first - executes before main.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my");
	printf(" back!\n");
}
void first(void) __attribute__((constructor));
