#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that adds positive numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of the sum. If no numbers, print 0
 * if contains symbols that are no digits,
 * print Error\n, and return 1.
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned int sum = 0;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];

			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < '0' || str[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(str);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
