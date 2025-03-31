#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_length - Calculates the length of a string.
 * @a: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string (number of characters).
 */
int str_length(const char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the list_t linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicated;
	list_t *new_node;

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
	new_node->str = duplicated;
	new_node->len = str_length(duplicated);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
