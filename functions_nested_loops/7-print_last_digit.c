#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The integer to extract the la
 *
 * Description: This function extracts the last digit of an integer `n`,
 * prints it using `_putchar`, and then returns its absolute value.
 *
 * Return: The last digit of `n`
 */
int print_last_digit(int n)
{
	int b;

	b = abs(n % 10);
	_putchar(b + '0');
	return (b);
}
