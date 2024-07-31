#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the address of the head of the list
 * @str: the string to add at the end of the list
 *
 * Return: the address of the new element
 * NULL if it failed.
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int i = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	new->str = strdup(str);
	new->len = i;

	if (str == NULL)
	{
		return (NULL);
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
