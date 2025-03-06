#include "main.h"
/**
 * prime_number - Checks if a number is prime recursively.
 * @i: The current divisor being checked.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 *
 *
 */
int prime_number(int i, int n)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(i + 1, n));
	}
}
/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_number(2, n));
}
