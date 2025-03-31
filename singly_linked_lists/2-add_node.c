#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_lenght - Calculates the length of a string.
 * @a: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string (number of characters).
 */
int str_lenght(const char *a)
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
	list_t *add_node;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicated = strdup(str);

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->str = duplicated;
	add_node->len = str_lenght(duplicated);
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
