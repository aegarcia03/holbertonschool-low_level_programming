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

	for (i = 0; ptr[i] != '\0'; i++)
	{
