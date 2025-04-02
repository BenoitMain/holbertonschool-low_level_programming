#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at given position.
 * @h: Double pointer to head of doubly linked list.
 * @idx: Index where new node should be added (starting from 0).
 * @n: Integer value to store in new node.
 *
 * Return: Address of new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		current = *h;
		while (current && i < idx - 1)
		{
			current = current->next;
			i++;
		}
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
