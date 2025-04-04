#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a specific index of a doubly
 *linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted (starts at 0).
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
