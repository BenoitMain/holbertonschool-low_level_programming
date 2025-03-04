#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the square matrix.
 *
 * <return: VOID.
 */
void print_diagsums(int *a, int size)
{
	int i, j, index;
	long int somme = 0;
	long int somme2 = 0;

	for (i = 0; i < size; i++)
	{
		index = i * size + i;
		somme += a[index];

	}

	for (j = 0; j < size; j++)
	{
		index = j * size + (size - 1 - j);
		somme2 += a[index];
	}
	printf("%ld, %ld\n", somme, somme2);
}
