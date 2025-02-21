#include "main.h"
/**
 * times_table -Write a function that prints the 9 times table, starting 0.
 *
 * Return: VOID
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			result = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
