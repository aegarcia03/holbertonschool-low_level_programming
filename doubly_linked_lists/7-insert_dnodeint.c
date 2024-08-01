#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to the linked list.
 * @idx: index of the list where node should be added
 * @n: the node to be inserted
 *
 * Return: the address of the new node 
 * NULL if it fails
 * If is not possible, do not add and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	
	dlistint_t *tmp;
	delistint_t *new;
	unsigned int i = 0; 
	
	new = malloc(sizeof(dlistint_t))
	
	if (new == NULL)
		return (NULL);
	
	new->n = n;

	if (idx == 0)
		return (add-dnodeint(h, n));
	
	new->n = n; 

	add-dnodeint // adds a new node at the beginning
	add_dnodeint_end // adds a node at the end 

	dlistint_t prev = h;
	for (i = 0; i < idx - 1; i++)
	{
		if (prev == NULL)
		{
			return (h);
		}
		prev = prev->next;
	}

}
