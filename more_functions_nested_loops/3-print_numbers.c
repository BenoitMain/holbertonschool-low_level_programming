#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: VOID
 */
void print_numbers(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		_putchar(numbers + '0');
		numbers++;
	}
	_putchar('\n');
}

