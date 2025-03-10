#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _size - Calculates the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _size(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
/**
 * _strdup - Duplicates a string by creating
 * a new dynamically allocated string.
 * @str: The input string to be duplicated.
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
 */
char *_strdup(char *str)
{
	int i;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc((_size(str) + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
