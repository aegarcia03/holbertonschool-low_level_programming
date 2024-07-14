#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: byte size of each element.
 *
 * Return: a pointer to the allcoated memory.
 * If nmeb or size = 0, return NULL.
 * If malloc fauls, return NULL.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	temp = array;

	for (i = 0; i < (size * nmemb); i++)
		temp[i] = '\0';

	return (array);
}
