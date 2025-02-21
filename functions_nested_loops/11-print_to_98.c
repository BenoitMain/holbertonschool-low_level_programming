#include "main.h"
#include<stdio.h>
/**
 *
 *
 *
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
