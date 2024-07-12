#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of the multiplication.
 * if does not receive argu,emts, print Error\n, and return 1.
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	{
		printf("%d\n", mult);
	}

	return (0);
}
