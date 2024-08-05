#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long result;
	unsigned int i = 0;

	result = (n ^ m);

	while (result > 0)
	{
		i += (result & 1);
		result >>= 1;
	}

	return (i);
}
