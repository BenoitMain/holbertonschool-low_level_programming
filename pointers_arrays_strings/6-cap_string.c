#include "main.h"
/**
 * min - Check if a character is a separator
 * @character: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int min(int character)
{
	return (character == ',' || character == ';' || character == '.'
	 || character == '!' || character == '?' || character == '"' ||
	character == '(' || character == ')' || character ==  '{' ||
	character == '}' || character == ' ' || character == '\t' ||
	character == '\n');
}
/**
 * cap_string - Capitalize the first letter of each word in a string
 * @cap: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *cap)
{
	char *separator = cap;
	int step = 1;

	while (*cap != '\0')
	{
		if (min(*cap))
		{
			step = 1;
		}
		else if (*cap >= 'a' && *cap <= 'z' && step)
		{
			*cap = *cap - ('a' - 'A');
			step = 0;
		}
		else
		{
			step = 0;
		}
		cap++;
	}
	return (separator);
}

