#include<stdio.h>
/**
* main -Write a program that prints all possible combinations
* of single-digit numbers.
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
