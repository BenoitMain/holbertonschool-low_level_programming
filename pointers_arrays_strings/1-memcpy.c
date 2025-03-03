#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @src: Pointer to copy .
 * @dest: Pointer who get src.
 * @n: octets to filled
 *
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
