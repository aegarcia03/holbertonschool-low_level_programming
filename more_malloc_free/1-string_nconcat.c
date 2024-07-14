#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the string to be concatenated with s1
 * @n: number of bytes from s2 to concatenate with s1.
 *
 * Description: If n is greater or equal to the length of
 * s2 then use the entire string s2.
 * If NULL is passed, treat it as an empty string
 *
 * Return: a ponter to a newyle allocated space in memory
 *	which contains s1, followed by the first n
 *	bytes of s2 an null terminated.
 *	- If memory allocation fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	else

		concat_str = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n && j < len2; j++, i++)
	{
		concat_str[i] = s2[j];
	}
	concat_str[i] = '\0';

		return (concat_str);
}
