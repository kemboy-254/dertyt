#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * list_len- Returns the no of 
 * elements in a linked list
 * @h: node to linked list
 *
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
