#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Description: This function takes a variable number of integers
 * and prints them, separated by the given `separator` string. If
 * `separator` is NULL, no separator is printed. The function always
 * ends with a new line.
 *
 * Return: Nothing (void function).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int number;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(num, unsigned int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	va_end(num);
	printf("\n");
}
