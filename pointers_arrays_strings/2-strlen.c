#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to be evaluated.
 *
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
