#include<stdio.h>
/**
* main -Write a program that prints all single digit numbers of base 1
* starting from 0,followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int Single_Digit = '0';

	while (Single_Digit <= '9')
	{
		putchar (Single_Digit);
		if (Single_Digit != '9')
		{
		putchar (',');
		putchar (' ');
		}
	}
	Single_Digit++;
	putchar('\n');
	return (0);
}
