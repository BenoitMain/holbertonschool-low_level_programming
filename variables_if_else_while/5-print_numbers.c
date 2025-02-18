#include<stdio.h>
/**
* main - Write a program that prints all single digit numbers of base
* 10 starting from 0 followed by a new line.
*
* Return: 0
*/
int main(void)
{
	char Single_Digit = 0;

	while (Single_Digit <= 9)
	{
		printf("%d", Single_Digit);
		Single_Digit++;
	}
	putchar('\n');
	return (0);
}
