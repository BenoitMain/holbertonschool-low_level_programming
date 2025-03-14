#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _size - Calculates the length of a string.
 * @str1: Pointer to the string.
 *
 * Return: Length of the string, 0 if string is NULL.
 */
int _size(char *str1)
{
	int j1 = 0;

	if (str1 != NULL)
	{
		while (*str1 != '\0')
		{
			j1++;
			str1++;
		}
	}
	return (j1);
}
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of pointers to the arguments.
 *
 * Return: Pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int total_length = 0;
	int i, j;
	int index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += _size(av[i]) + 1;
	}

	ptr = malloc((total_length + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[index++] = av[i][j];
		}
		ptr[index++] = '\n';
	}
	ptr[index] = '\0';
	return (ptr);
}
