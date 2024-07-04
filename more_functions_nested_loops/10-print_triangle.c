#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size - number of times '#' should be printed
 *
 * If size is 0 or less, the function should print only a new line.
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{	
		for (i = 1; i <= size; i++)

