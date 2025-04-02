#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;

	while (count < index && current != NULL)
	{
		current = current->next;
		count++;


	}

	return (current);
}
