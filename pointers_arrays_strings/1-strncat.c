#include "main.h"
/**
 * *_strncat - Write a function that concatenates two strings.
 * @src: First sentence.
 * @dest: Second sentence.
 * @n: Variable to enter in src array.
 *
 * Return: copy_dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *copy_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (copy_dest);
}
