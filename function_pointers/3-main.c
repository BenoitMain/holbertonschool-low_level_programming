#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 on success, or exits with a specific status code on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
