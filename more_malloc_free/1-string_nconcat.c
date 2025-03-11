#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _size - Calculate the total length of two strings.
 * @str1: First string.
 *
 * Return: The total length of the two strings.
 */
int _size(char *str1)
{
	int curseur = 0;

	if (str1 == NULL)
	{
		return (0);
	}
	while (*str1++)
	{
		curseur++;
	}

	return (curseur);
}
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_lenght, s2_lenght, total_lenght;
	char *pointer;

	s1_lenght = _size(s1);
	s2_lenght = _size(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > s2_lenght)
	{
		n = s2_lenght;
	}
	total_lenght = s1_lenght + n + 1;
	pointer = malloc(total_lenght * sizeof(char));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		pointer[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		pointer[i + j] = s2[j];
	}
	pointer[i + j] = '\0';
	return (pointer);
}
