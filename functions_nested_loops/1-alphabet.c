#include "main.h"
/**
* print_alphabet - Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: VOID
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
