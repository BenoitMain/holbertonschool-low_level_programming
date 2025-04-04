#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all data in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all integers in the list. Returns 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	if (!head)
	{
		return (0);
	}
	return (sum);
}
