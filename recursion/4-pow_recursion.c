#include "main.h"
/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: the base number.
 * @y: the exponent.
 *
 * Return: x power y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
