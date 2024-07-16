#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a char
 * @f: pointer to the function
 *
 * Return: nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

	else
		return;
}
