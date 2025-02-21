#include<stdio.h>
/**
 * main - Write a program that prints all possible different combinations
 * of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 89 ; a++)
	{
		if ((a / 10) != (a % 10))
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
		}
		else
			continue;
		if (a < 89)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

