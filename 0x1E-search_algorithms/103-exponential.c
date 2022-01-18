#include "search_algos.h"

/**
 * exponential_search - searches for a val in a sorted arr using ESA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, end = size - 1, mid;
	if (!array)
		return (-1);
	if (array[i] == value)
		return (i);
	i = 1;
	while ((i < size) && (array[i] <= value))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, end);
	start = i / 2;
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], i < end ? "," : "\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
