#include "main.h"
/**
 * more_numbers -Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: VOID
 */
void more_numbers(void)
{
	int x_times = 0;
	int numbers = 0;

	while (x_times <= 9)
	{
		while (numbers <= 14)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
		}
			_putchar((numbers % 10) + '0');
			numbers++;
		}
		_putchar('\n');
		numbers = 0;
		x_times++;
	}
}

