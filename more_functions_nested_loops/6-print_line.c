#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Character to replace
 *
 * Return: VOID
 */
void print_line(int n)
{
	int Straight = 0;

	while (Straight <= n)
	{
		_putchar('_');
		Straight++;

		if (n <= 0)
		{
			_putchar('\n');
		}
	}

	_putchar('\n');
}

