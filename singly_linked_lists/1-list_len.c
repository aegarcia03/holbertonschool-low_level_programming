#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 *
 * list_len - returns the number of elements
 * in a linked list_t list.
 *
 * @h: pointer to the first node of the linked list.
 *
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
