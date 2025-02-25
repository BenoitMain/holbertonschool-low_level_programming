#include "main.h"
/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 *@size: Character to check.
 *
 * Return: VOID.
 */
void print_triangle(int size)
{
	int Height, Width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (Height = 1; Height <= size; Height++)
	{
		Width = 0;

		while (Width < size)
		{
		if ((Height + Width) < size)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('#');
		}
		Width++;
		}
		Width = 0;
		_putchar('\n');
	}
}

