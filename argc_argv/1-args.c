#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the program's arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
