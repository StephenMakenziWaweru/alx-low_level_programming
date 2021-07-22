#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to be printed btwn strings.
 * @n: number of args.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(str, n);
	while (i--)
		printf("%s%s", va_arg(str, char *), i ? (separator ? separator : "") : "\n");
}
