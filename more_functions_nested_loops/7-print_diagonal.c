#include "main.h"
/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 * @n: Character to check.
 *
 * Return: VOID
 */
void print_diagonal(int n)
{
	int Diagonal = 0;
	int Space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (Diagonal < n)
	{
		Space = 0;

		while (Space < Diagonal)
		{
			_putchar(' ');
			Space++;
		}
		_putchar('\\');
		_putchar('\n');
		Diagonal++;
	}
}

