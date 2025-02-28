#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 * @src: First sentence.
 * @dest: Second sentence.
 * @n: Variable to enter in src array.
 *
 * Return: copy_dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *copy_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
		dest++;
	}
	return (copy_dest);
}

