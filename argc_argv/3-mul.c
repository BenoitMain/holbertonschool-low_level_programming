#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 if error ,1 if multiplication successfull.
 */
int main(int argc, char *argv[])
{
	int i;
	int multiplication_sum = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multiplication_sum *= atoi(argv[i]);
		}
		printf("%d\n", multiplication_sum);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (1);
}
