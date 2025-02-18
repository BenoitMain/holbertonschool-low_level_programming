#include<stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase, and then in
* uppercase, followed by a new line.
*
* Return: 0
*/
int main(void)
{
	char a = '0';
	char A = 'a';

	while (a <= '9')
		putchar (a++);
	while (A <= 'f')
		putchar (A++);
	putchar ('\n');
	return (0);
}
