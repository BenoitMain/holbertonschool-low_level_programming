#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicated;
	list_t *new_node, *last = *head;
	unsigned int index = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicated = strdup(str);
	if (duplicated == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicated);
		return (NULL);
	}
	while (str[index] != '\0')
	{
		index++;
	}
	new_node->str = duplicated;
	new_node->len = index;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}

