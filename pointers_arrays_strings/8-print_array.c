#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The array to be printed
 * @n: Number of elements to print
 *
 * Return: VOID.
 */
void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", a[start]);
		if (start < n - 1)
		{
		printf(", ");
		}
	}
	putchar('\n');
}

