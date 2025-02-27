#include "main.h"
/**
 * _strcpy - Copies a string.
 * @src: Pointed string source to copy.
 * @dest: Destination to paste.
 *
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

