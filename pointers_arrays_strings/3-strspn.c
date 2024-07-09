#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: points to the string
 * @accept: string containing the list of characters to match in s.
 *
 * Return: umber of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (s[i] != '\0')
	{
		i = 0;
		match = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
			}
			i++;
		}
		if (match == 0)
		{
			break;
		}

		s++;
	}
	return (count);
}
