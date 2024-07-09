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
	char map[256] = {0};

	map['a'] = map['A'] = '4';
	map['e'] = map['E'] = '3';
	map['o'] = map['O'] = '0';
	map['t'] = map['T'] = '7';
	map['l'] = map['L'] = '1';

	while (*s != '\0')
	{
		if (map[(unsigned char)*s])
		{	*s = map[(unsigned char)*s];
		}
		s++;
	}
	return (ptr);
}
