#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @src: pointer to the source string.
 * @dest: pointer to the dest.
 * @n: number of bytes to be concatenated.
 *
 * Return: dest.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}
