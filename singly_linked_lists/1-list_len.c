#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list_t linked list.
 *
 * Return: The total number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}
	return (count);
}
