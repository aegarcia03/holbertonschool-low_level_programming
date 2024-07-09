#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded.
 *
 * Return: pointer to string encoded
 */
char *leet(char *s)
{
	char *ptr = s;
	int i = 0;
	char characters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {4, 3, 0, 7, 1};

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == characters[i] || *s == characters[i] - 32)
			{
				*s = leet[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
