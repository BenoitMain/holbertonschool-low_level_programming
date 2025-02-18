#include<stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase, followed
* by a new line execpt "q" and "e".
*
* Return: 0
*/
int main(void)
{
	char a = 97;

	while (a < 123)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar (a++);
	}
	putchar ('\n');
	return (0);
}
