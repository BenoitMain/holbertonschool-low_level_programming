#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: Pointer to the 2D grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
