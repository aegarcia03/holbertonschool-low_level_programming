#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all data, if list is empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;

	int sum = 0;

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;

	}
		return (sum);
}
