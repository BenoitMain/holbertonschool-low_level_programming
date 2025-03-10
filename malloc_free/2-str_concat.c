#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _size - Calculate the total length of two strings.
 * @str1: First string.
 * @str2: Second string.
 *
 * Return: The total length of the two strings.
 */
int _size(char *str1, char *str2)
{
	int j1 = 0;
	int j2 = 0;

	if (str1 != NULL)
	{
		while (*str1 != '\0')
		{
			j1++;
			str1++;
		}
	}
	if (str2 != NULL)
	{

		while (*str2 != '\0')
		{
			j2++;
			str2++;
		}
	}
	return (j1 + j2);
}
/**
 * str_concat - Concatenate two strings into a newly allocated memory space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the newly allocated memory containing the concatenated
 * string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *concat = NULL;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	concat = malloc((_size(s1, s2) + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		concat[i++] = *s1++;
	}
	while (*s2)
	{
		concat[i++] = *s2++;
	}
	concat[i] = '\0';
	return (concat);
}
