#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed in between
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str =  va_arg(args, char*);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");

	va_end(args);
}
