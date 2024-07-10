#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square
 * @size: number of row/columns.
 * @a: pointer to the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int right = 0, left = 0, row = 0, col = 0, value;

	while (row < size)
	{
		while (col < size)
		{
			value = *(a + row * size + col);

			/*printf("%d,%d - %d\n", row, col, value);*/

			if (row == col)
			{
				left = left + value;
			}
			if (col == ((size - 1) - row))
			{
				right = right + value;
			}

			col = col + 1;
		}

		row = row + 1;
		col = 0;
	}
	printf("%d, %d\n", left, right);
}
