#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: First number
 *
 * Return: VOID
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);

		if (n != 98)
		{
			printf(", ");
		}
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
