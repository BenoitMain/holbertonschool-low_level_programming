#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *strdup - Duplicates a string by creating a new dynamically allocated string.
 * @str: The input string to be duplicated.
 *
 * Return: if str is NULL.
 */
char *_strdup(char *str)
{
	int i;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc ((strlen(str) + 1) * sizeof (char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
