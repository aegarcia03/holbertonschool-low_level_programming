#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer that points to a string.
 *
 * If the number of characters is odd, the function should print the
 * last n characters of the string.
 * n = (length_of_the_string - 1) / 2
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int index;
	int n;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	for (index = length - n; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
