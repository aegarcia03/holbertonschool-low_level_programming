#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width(col) of the matrix.
 * @height: The height(row)
 *
 * Return: a pointer to the 2-dimensional array of integers
 * If failuire, width &/or height <= - NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == 0)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(sizeof(int) * width);
		if (matrix[row] == 0)
		{
			for (col = 0; col < row; col++)
				free(matrix[col]);
			free(matrix);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			matrix[row][col] = 0;
		}
	}
	return (matrix);
}
