#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer to by swapped with b.
 * @b: integer to by swapped with a.
 *
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
