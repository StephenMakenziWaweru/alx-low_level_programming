#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: array to be iterated over.
 * @size: size of array.
 * @cmp: function to be used.
 *
 * Return: index of 1st element for which cmp does not return 0 or -1 on fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, index;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		while (i < size)
		{
			index = cmp(array[i]);
			if (index)
				return (i);
			i++;
		}
	}

	return (-1);
}
