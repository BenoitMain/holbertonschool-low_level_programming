#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	while (head != NULL)
	{
		free_node = head->next;
		free(head);
		head = free_node;
	}

}
