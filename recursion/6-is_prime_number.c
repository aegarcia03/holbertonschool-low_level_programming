#include "main.h"
#include <stdio.h>

/**
 * support_function - checks if a number is prime recursively.
 * @i: the current divisor being checked.
 * @n: number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int support_function(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (support_function(n, i + 1));
}
/**
 * is_prime_number - checks if a number is a prime number.
 * @n: number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (support_function(n, 2));
}
