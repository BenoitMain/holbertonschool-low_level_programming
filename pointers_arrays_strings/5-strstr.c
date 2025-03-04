#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *tempo, *start;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (start = haystack; *start != '\0'; start++)
	{
		tempo = needle;
		haystack = start;

		for (; *haystack != '\0' && *tempo != '\0'
			&& *haystack == *tempo;)
		{
			tempo++;
			haystack++;
		}

		if (*tempo == '\0')
		{
			return (start);
		}
	}
	return (((char *)0));
}
