#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated.
 *
 * Return: a pointer to the new string.
 * NULL if str = NULL or insufficient mememory
 */
char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *duplicate;

	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';

	return (duplicate);
}
