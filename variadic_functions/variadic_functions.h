#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - associates a type with a print function
 * @type: the type of argument (e.g., 'c', 'i', 'f', 's')
 * @func: pointer to the function that prints the type
 */

typedef struct printer
{
	char type;
	void (*func)(va_list args, char *separator);
} printer_t;

#endif
