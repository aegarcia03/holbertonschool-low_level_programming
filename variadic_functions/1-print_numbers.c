#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed in between.
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d ", va_arg(args, int));

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

