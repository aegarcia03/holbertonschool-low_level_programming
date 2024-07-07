#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer that points to a string.
 *
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index]; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
