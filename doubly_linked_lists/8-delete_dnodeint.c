#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * *head: pointer to the head of the list
 * @index: of the node that should be deleted.
 *
 * Return: 1 if success, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head != NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return(1);
	}

	for (i = 0; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
