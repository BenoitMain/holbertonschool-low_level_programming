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
	int start = 0;

	while (str[start] != '\0')
	{
		if (start % 2 == 0)
		{
			_putchar(str[start]);
		}
		start++;
	}
	_putchar('\n');
}
