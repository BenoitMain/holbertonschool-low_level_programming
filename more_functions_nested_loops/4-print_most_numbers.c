#include "main.h"
/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: VOID
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0 ; numbers <= 9; numbers++)
	{

		if (numbers == 2 || numbers == 4)
		{
			numbers++;
		}

		_putchar(numbers + '0');
	}
	_putchar('\n');
}

