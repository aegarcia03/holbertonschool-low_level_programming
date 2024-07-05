#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: number of '#' and spaces should be printed
 *
 * If size is 0 or less, the function should print only a new line.
 *
 */
void print_triangle(int size)
{
	int rowno, space, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rowno = 1; rowno <= size; rowno++)
		{
			for (space = 1; space <= (size - rowno); space++)
			{
				_putchar(32);
			}
			for (symbol = 1; symbol <= rowno; symbol++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
