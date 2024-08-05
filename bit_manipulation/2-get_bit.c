#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: starts form 0 or the bit you want to get
 *
 * Return: the value of a bit or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > n)
		return (-1);

	n = (n >> index);
	bit = (n & 1);

	return (bit);
}
