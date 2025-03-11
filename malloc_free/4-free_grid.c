#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height of the grid (number of rows).
 *
 * Return: VOID.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
