#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements.
* @size: Size of each element.
*
* Return: Pointer to the allocated memory, or NULL if failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_lenght;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_lenght = nmemb * size;

	array = malloc(total_lenght);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_lenght; i++)
	{
		array[i] = 0;
	}
	return (array);
}
