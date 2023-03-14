#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by the alloc_grid function.
 * @grid: The grid.
 * @height: The height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
