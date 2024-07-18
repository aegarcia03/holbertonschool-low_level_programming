#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: is all types of arguments:
 * c - char i - integer f - float
 * s - char* (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	char *separator = "";

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str =  va_arg(args, char*);

				if (str == NULL)
				str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");

	va_end(args);
}
