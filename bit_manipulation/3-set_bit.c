#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index starts from 0 or the bit you want to set.
 *
 * Returns: 1 if it works, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index >= 64)
		return (-1);

	bit  = (1 << index);
	*n = *n | bit;

	return (1);
}
