#include <stdarg.h>

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * struct print_type - Struct format type.
 * @id: The format specifier.
 * @func: The function pointer to print corresponding type.
 */
typedef struct print_type
{
	char type;
	void (*func)(va_list);
} print_type;

#endif
