#include "main.h"
#include <stdio.h>
/**
 * main - Fizz-Buzz: - prints the numbers from 1 to 100,
 *			followed by a new line.
 *
 * prints 'Fizz' - instead of multiples of three.
 * prints 'Buzz' - instead of multiples of five.
 * prints 'FizzBuzz' - instead of both three and five.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	return (0);
}
