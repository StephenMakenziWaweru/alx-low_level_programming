#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter on each
 * array element.
 * @array: array to be iterated over.
 * @size_t: size of array.
 * @action: function to be used on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
