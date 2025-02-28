#include "main.h"
/**
*
*
*
*
*
*/
int min(int character)
{
	return (character == ',' || character == ';' || character == '.'
	 || character == '!'|| character == '?'|| character == '"'||
	 character == '(' || character == ')' || character ==  '{'||
	 character == '}' || character == ' ');
}

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

