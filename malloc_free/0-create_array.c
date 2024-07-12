#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: number of elements in the array.
 * @c: char to initialize the array with.
 *
 * Return: a pointer to the array or
 * NULL if size = 0 or if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(size * sizeof(char));

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

