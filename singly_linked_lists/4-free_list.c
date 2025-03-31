#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Free linked list.
 * @head: Pointer to first element.
 *
 * Return: VOID.
 */
void free_list(list_t *head)
{
	list_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}
}
