#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: The string to be printed in reverse.
 *
 * Return: VOID.
 */
void rev_string(char *s)
{
	char *start = s;
	int reverse = 0;

	while (*s != '\0')
	{
		s++;
	}

	s--;
	while (start < s)
	{
		reverse = *s;
		*s = *start;
		*start = reverse;
		start++;
		s--;
	}
}

