#include <stdio.h>
#include <stdlib.h>
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
/**
 * number - Checks if a string contains only digits.
 * @str: The string to check.
 *
 *
 * Return: 1 if str contains only digits else 0.
 */
int number(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (_isdigit(str[j]) == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 if successful, 1 if Error.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
