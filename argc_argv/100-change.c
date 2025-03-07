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
 * main - Calculate the minimum number of coins for change.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cash = 0;
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins;
	int total_coins = 0;
	int size = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (!number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		num_coins = cash / coins[i];
		total_coins += num_coins;
		cash -= num_coins * coins[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
