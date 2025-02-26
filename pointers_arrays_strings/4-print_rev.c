#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: VOID.
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s >= start)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
