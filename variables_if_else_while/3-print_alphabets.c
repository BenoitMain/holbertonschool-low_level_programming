#include<stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase, and then in
* uppercase, followed by a new line.
*
* Return: 0
*/
int main(void)
{
	char a = 97;
	char A = 65;

	while (a < 123)
		putchar (a++);
	while (A < 90)
		putchar (A++);
	putchar ('\n');
	return (0);
}
