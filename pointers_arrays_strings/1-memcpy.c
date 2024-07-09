#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area.
 * @dest: points to the destination where the content is to be copied.
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		ptr[i] = src[i];
	}
	return (dest);
}
