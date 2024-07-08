#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int index;
	char *start, *end, temp;

	for (index = 0; s[index] != 0; index++)
	{
		length++;
	}

	start = s;
	end = s + length - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
