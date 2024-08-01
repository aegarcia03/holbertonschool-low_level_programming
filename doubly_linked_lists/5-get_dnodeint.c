#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index -returns the nth node of a linked list.
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: the nth node or if does not exist, NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;

	}
	if (i == index)
		return (current);
	else
		return (NULL);
}
