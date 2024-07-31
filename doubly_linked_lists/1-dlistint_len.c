#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the first node of the list.
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
