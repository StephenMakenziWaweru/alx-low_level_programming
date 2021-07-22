#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of args passed.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lister;
	unsigned int i = 0;
	int sum = 0;

	va_start(lister, n);
	while (i < n)
	{
		sum += va_arg(lister, int);
		i++;
	}
	va_end(lister);

	return (sum);
}
