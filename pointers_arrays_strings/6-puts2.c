#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 * @str: Numbers to prints.
 *
 * Return: VOID
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		str++;
		if ((*str % 2) == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
