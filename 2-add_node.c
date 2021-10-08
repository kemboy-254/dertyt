#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node- Adds a new node at the beginning of a list
 * @head: pointer to node to be added
 * @str: string to be duplicated
 * to the new node
 *
 * Return: Address of the new element
 *	NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	p = strdup(str);
	if (p == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len=0; str[len];)
		len++;
	new_node->str = p;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
