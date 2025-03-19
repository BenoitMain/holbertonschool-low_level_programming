#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * ctype - Prints character type
 * @args: A va_list containing the character to print
 *
 * Description: This function extracts a character from the va_list
 * and prints it using printf.
 */
void ctype(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * itype - Prints integer type
 * @args: A va_list containing the integer to print
 *
 * Description: This function extracts an integer from the va_list
 * and prints it using printf.
 */
void itype(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * ftype - Prints float type
 * @args: A va_list containing the float to print
 *
 * Description: This function extracts a float (as a double) from the va_list
 * and prints it using printf.
 */
void ftype(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * stype - Prints string type
 * @args: A va_list containing the string to print
 *
 * Description: This function extracts a string from the va_list and prints it.
 * If the string is NULL, it prints "(nil)" instead.
 */
void stype(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints values based on format specifiers
 * @format: List of types of arguments passed to the function
 *
 * Return: VOID.
 */
void print_all(const char *const format, ...)
{
	print_type argtype[] = {
	    {'c', ctype},
	    {'i', itype},
	    {'f', ftype},
	    {'s', stype},
	    {0, NULL}};

	va_list fonction;
	char *separator = " ";
	unsigned int index = 0;
	unsigned int j;

	va_start(fonction, format);

	while (format && format[index] != '\0')
	{
		j = 0;
		while (argtype[j].type != 0)
		{
			if (format[index] == argtype[j].type)
			{
				printf("%s", separator);
				argtype[j].func(fonction);
				separator = ", ";
				break;
			}
			j++;
		}
		index++;
	}
	va_end(fonction);
	putchar('\n');
}
