#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory.
 * If failes, return 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mem =  malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
