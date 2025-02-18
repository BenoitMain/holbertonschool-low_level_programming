#include<stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase
*
* Return: 0
*/
int main(void)
{
	char a = 97;

	while (a < 123)
		putchar (a++);
	putchar ('\n');
	return (0);
}
