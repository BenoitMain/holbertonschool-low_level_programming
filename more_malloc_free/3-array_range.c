#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int value, size_array;
	int *array;

	size_array = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(size_array * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (value = 0; value < size_array ; value++)
	{
		array[value] = min + value;
	}
	return (array);
}
