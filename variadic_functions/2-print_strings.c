#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Description: This function takes a variable number of strings
 * and prints them, separated by the given `separator` string. If
 * `separator` is NULL, it is ignored. If one of the strings is NULL,
 * the function prints `(nil)` instead of the string. The function
 * always ends with a new line.
 *
 * Return: Nothing (void function).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		printf("%s", str);
		else
		printf("(nil)");

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
