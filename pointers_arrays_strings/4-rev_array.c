#include "main.h"
/**
 * reverse_array - print an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int swap = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}

