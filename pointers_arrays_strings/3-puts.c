#include "main.h"
/**
 * _puts - Write a function that prints a string, followed by a
 * new line, to stdout.
 *@str: String to print
 *
 * return: VOID
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
