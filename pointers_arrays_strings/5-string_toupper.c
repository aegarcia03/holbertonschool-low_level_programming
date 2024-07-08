#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be checked for lowercase letters
 *
 *Return: string in uppercase.
 */
char *string_toupper(char *str)
{
	int i;
	char *ptr = str;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 32;
		}
	}
	return (str);
}
