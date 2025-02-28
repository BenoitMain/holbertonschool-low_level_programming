#include "main.h"
/**
 * *string_toupper - Write a function that changes all lowercase letters
 * of a string to uppercase.
 * @uppercase: Array to print in uppercase.
 *
 * Return: tempo
 */
char *string_toupper(char *uppercase)
{
	char *tempo = uppercase;

	while (*uppercase)
	{
		uppercase++;
		if (*uppercase >= 'a' && *uppercase <= 'z')
		{
			*uppercase = *uppercase -  ('a' - 'A');
		}
	}
	return (tempo);
}
