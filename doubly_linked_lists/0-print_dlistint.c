#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
