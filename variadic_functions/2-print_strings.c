#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 * ...: Variable number of strings to print.
 *
 * Return: VOID.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list new;
	char *str;
	unsigned int i;

	va_start(new, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(new, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');
	va_end(new);
}
