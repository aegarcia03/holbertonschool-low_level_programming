#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if it works, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long bit;
	
	if (index >= 64)
		return (-1);

	bit = (1 << index);
	*n = *n & ~bit;

	return (1);
}
