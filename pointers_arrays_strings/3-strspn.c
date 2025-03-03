#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: result.
 */
unsigned int _strspn(char *s, char *accept)
{
	int result = 0;
	int flag;
	char *reset = accept;

	for (; *s != '\0'; s++)
	{
		reset = accept;
		flag = 0;

		for (; *reset != '\0'; reset++)
		{
			if (*s == *reset)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			result++;
		}
		else
		{
			break;
		}
	}
return (result);
}
