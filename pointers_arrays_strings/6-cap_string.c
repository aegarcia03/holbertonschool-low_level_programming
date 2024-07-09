#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be checked.
 *
 * Return: string with all its words capitalized.
 *
 */
char *cap_string(char *str)
{
	int i;
	char *ptr = str;

	if (ptr[0] >= 'a' && ptr[0] <= 'z')
	{
		ptr[0] -= ('a' - 'A');
	}

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\n' ||
			ptr[i] == ',' || ptr[i] == ';' || ptr[i] == '.' ||
			ptr[i] == '!' || ptr[i] == '?' || ptr[i] == '"' ||
			ptr[i] == '(' || ptr[i] == ')' || ptr[i] == '{' ||
			ptr[i] == '}')

		{
			if (ptr[i + 1] >= 'a' && ptr[i + 1] <= 'z')
			{
				ptr[i + 1] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
