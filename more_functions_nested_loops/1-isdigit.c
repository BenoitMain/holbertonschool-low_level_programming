#include "main.h"
/**
 * _isdigit - Checks if a character is a digit.
 * @c: Character to check.
 *
 * Return: 1 if c is a digit (0-9), else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

