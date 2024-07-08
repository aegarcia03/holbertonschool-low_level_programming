#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array.
 * @n: number of elements to swap
 *
 * Return: array swapped.
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end++;
	}
}
