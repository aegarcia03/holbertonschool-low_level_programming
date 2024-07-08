#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer to the string to be converted.
 *
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int index = 0;
	int result = 0;

	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (result * sign);
}
