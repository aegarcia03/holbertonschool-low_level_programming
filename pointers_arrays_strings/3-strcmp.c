#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @s1: string to be compared with s2.
 * @s2: string to be compared with s1.
 *
 * Return: equal to 0 if s1 == s1;
 * less than 0 if s1<s2; greater than 0 if s1>s2.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
