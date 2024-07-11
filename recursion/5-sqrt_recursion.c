#include "main.h"
#include <stdio.h>

/**
 * support_function - helper function to find the square root.
 * @number: the number to find the square root of
 * @root: root of number
 * Return: value of square root, or -1 if n < 0
 *
 */
int support_function(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (support_function(number, root + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of
 *
 * Return: value of square root, or -1 if n < 0
 * or if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (support_function(n, 0));
	}
}
