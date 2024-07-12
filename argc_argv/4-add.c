#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{	
		if (argc < 48 && argc > 57)
		{
			printf("Error\n");
			return (1);
		}
		else if(argc == 0)
		{
			printf("0");
		}
		
		sum += atoi (argv[i]);
	}
	
	printf("%d\n", sum);

	return (0);
}
