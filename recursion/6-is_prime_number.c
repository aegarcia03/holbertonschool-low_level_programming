#include "main.h"
#include <stdio.h>

/**
 * support_function: helps to check if n 
 * is divisible by any integer.
 * @i: square of n
 * @n: number to be checked.
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
 * is_prime_number - returns 1 if the input integer is a prime number.
 * otherwise return 0.
 * @n: number to be checked.
 */
int is_prime_number(int n)
{
	return (support_function(n, 2));
}
