#include "main.h"
/**
 * integer - Helper function to find the square root.
 * @i: The current number to check if it's the square root.
 * @n: The number to find the square root.
 *
 * Return: The natural square root if found, -1 otherwise.
 */
int integer(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (integer(i + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root.
 *
 * Return: The natural square root, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}

	return (integer(1, n));
}
