#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate factorial from.
 *
 * Factorial of 0 is 1.
 * Return: factorial of n, or -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
