#include "main.h"
/**
* print_alphabet_x10 -Write a function that prints 10 times the alphabet,
*  in lowercase, followed by a new line.
*
* Return: VOID
*/
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 10)
	{
		i++;
		while (a <= 'z')
		{
		_putchar(a++);
		}
		a = 'a';
		_putchar('\n');
	}
}
