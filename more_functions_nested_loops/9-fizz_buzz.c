#include <stdio.h>
/**
 * main - Write a program that prints the numbers from 1 to 100, followed by
 * a new line. But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz. For numbers which are multiples of
 * both three and five print FizzBuzz.
 *
 * Return: 0.
 */
int main(void)
{
	int Numbers;
	char Multiples_Three[] = "Fizz";
	char Multiples_Five[] = "Buzz";

	for (Numbers = 1; Numbers <= 100; Numbers++)
	{
		if (Numbers % 3 == 0 && Numbers % 5 == 0)

		{
			printf("%s%s ", Multiples_Three, Multiples_Five);
		}
		else if (Numbers % 3 == 0)
		{
			printf("%s ", Multiples_Three);
		}
		else if (Numbers % 5 == 0)
		{
			printf("%s ", Multiples_Five);
		}
		else if (Numbers == 100)
		{
			printf("%s\n", Multiples_Five);
		}
		else
		{
			printf("%d ", Numbers);
		}
	}
	return (0);
}
