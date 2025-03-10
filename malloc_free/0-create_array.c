#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates and initializes an array of chars.
 * @size: The size of the array to allocate.
 * @c: The character to fill the array with.
 *
 * Return: NULL or array.
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);

}
