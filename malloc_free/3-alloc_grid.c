#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - return a pointer to a 2 dimensional array of int
 *@width: parameter of size of the array
 *@height: parameter of size of the array
 * Return: a pointer or if width or height 0 or negative NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
		free(grid);
		return (NULL);
		}

	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
}
	return (grid);
}
