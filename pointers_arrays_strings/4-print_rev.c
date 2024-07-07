#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be printed.
 *
 * Return: string in reverse.
 *
 */
void print_rev(char *s)
{
	int index;
	int length = 0;

	for (index = 0 ; s[index] != '\0'; index++)
	{
		length++;
	}

	for (index = length - 1; index >= 0 ; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
