#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: VOID.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (index = 0; index < size; index++)
	{
		(*action)(array[index]);
	}

}
