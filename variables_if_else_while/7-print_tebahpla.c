#include<stdio.h>
/**
* main - Write a program that prints the lowercase alphabet in reverse,
* followed by a new line.
*
* Return: 0
*/
int main(void)
{
	char z = 122;

	while (z >= 97)
		putchar (z--);
	putchar ('\n');
	return (0);
}
