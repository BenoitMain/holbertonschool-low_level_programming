#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 *  Return: NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *tempo;

	for (; *s != '\0'; s++)
	{
		tempo = accept;

		for (; *tempo != '\0'; tempo++)
		{
			if (*s == *tempo)
			{
				return (s);
			}
		}
	}
	return ((char *)0);
}
