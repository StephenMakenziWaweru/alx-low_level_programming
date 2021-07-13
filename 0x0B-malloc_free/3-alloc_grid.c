#include "holberton.h"

/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: width of the array (no. of columns).
 * @height: height of the array (no. of rows).
 *
 * Return: pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;
	
	/* check if both are either 0 or -ve */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for rows */
	ptr = (int **)malloc(sizeof(int *) * height);
	
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		/* allocate memory for columns */
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			/* free already allocated memory if not allocatable */
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		/* initialize with zero each element */
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
