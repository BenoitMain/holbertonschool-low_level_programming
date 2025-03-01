#include "main.h"
/**
 * digit - Check character between 0 and 9.
 * @c: Le caractère à vérifier
 *
 * Return: c.
 */
int digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _atoi - ASCII To Integer.
 * @s: Le caractère à vérifier
 *
 * Return: 1 si c est un chiffre, 0 sinon
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int digit_found = 0;

	while (*s)
	{
		if (digit(*s))
		{
			digit_found = 1;

			if (res > 214748364 || (res == 214748364 && (*s - '0') > 7))
			{
				return ((sign == 1) ? 2147483647 : -2147483648);
			}
			res = res * 10 + (*s - '0');
		}
			else if (*s == '-' && !digit_found)
			{
				sign *= -1;
			}
			else if (*s != '+' && digit_found)
			{
				break;
			}
		s++;
	}
	return (res * sign);
}

