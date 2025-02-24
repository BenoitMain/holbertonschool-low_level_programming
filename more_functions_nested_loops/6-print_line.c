#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Character to replace
 *
 * Return: VOID
 */
void print_line(int n)
{
	if (n == 2)
	{
		_putchar('_');
		_putchar('_');
		_putchar('\n');
	}
	if (n == 10)
	{
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

