#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimen grid previously created by alloc_grid function.
 * @grid: the address of the two dimensional grid.
 * @height: rows of the grid.
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
