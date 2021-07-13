#include "holberton.h"

/**
 * free_grid - frees a 2D grid prev. created
 * @grid: pointer to 2D array.
 * @height: no. of rows in the matrix.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	/* check to see if grid is NULL or no rows present */
	if (grid == NULL || height <= 0)
		return;

	/* free element-wise */
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	/* free the entire block */
	free(grid);
}
