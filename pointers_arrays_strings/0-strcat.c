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
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (temp);
}
