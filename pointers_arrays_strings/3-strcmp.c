#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: First sentence to compare.
 * @s2: Second sentence to compare.
 *
 * Return: S1 -S2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
