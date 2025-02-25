#include "main.h"
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: Character to check.
 *
 * Return: VOID
 */
void print_square(int size)
{
	int Height = 0;
	int Square;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (Height < size)
	{
		Square = 0;

		while (Square < size)
		{
			_putchar('#');
			Square++;
		}
		_putchar('\n');
		Height++;
	}
}

