#include<stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase, followed
* by a new line execpt "q" and "e".
*
* Return: 0
*/
int main(void)
{
	char a = a;

	while (a < 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		putchar (a++);
	}
	putchar ('\n');
	return (0);
}
