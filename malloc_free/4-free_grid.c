#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free 2D array of int previously created by malloc_grid
 * @grid: input 2D array of int to free
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
