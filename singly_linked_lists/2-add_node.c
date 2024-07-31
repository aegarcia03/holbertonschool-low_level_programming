#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the address of the head of the list
 * @str: the string to add at the beginning of the list
 *
 * Return: the address of the new element
 * NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (new);

}
