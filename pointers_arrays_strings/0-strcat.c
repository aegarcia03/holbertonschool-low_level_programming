#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @src: pointer to source string
 * @dest: pointer to dest.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		dest++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
