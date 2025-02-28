#include "main.h"
/**
 * *_strcat - Write a function that concatenates two strings.
 * @dest: Second sentence.
 * @src: First sentence.
 *
 * Return: copy_dest.
 */
char *_strcat(char *dest, char *src)
{
	char *copy_dest = dest;

	for (; *dest != '\0'; )
	{
		dest++;
	}
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
	return (copy_dest);
}
