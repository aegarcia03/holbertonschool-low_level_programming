#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: is the operator pased as argument
 *
 * Return: a pointer to the function chosen.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (*ops[i].op != *s)
	{
		i = i + 1;

		if ((i > 4) || (s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
	}

	return (ops[i].f);
}
