#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	va_start(nums, n);
	
	separator = separator ? separator : "";

	while (i < n)
	{
		printf("%d%s",va_arg(nums, int), i == (n - 1)? "\n" : separator);
		i++;
	}

	va_end(nums);
}
