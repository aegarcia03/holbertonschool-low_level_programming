#include "main.h"
#include <stdio.h>
/**
 * _strchr -  locates a character in a string.
 * @s: input string.
 * @c: character to be located.
 * Return:  a pointer to the first occurrence of the character c in s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == '\0')
	{
		return (ptr);
	}

	return (NULL);
}
