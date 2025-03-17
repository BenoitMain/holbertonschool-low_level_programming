#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match is found
 * or if invalid input is provided (size <= 0 or NULL pointers).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if ((*cmp)(array[index]) != '\0')
		{
			return (index);
		}
	}
	return (-1);
}
