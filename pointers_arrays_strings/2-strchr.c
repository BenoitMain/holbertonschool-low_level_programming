#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: s or NULL.
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0' && *s != c; s++)
{
}
if (*s == c)
{
	return (s);
}
else
{
	return ((char *)0);
}
}
