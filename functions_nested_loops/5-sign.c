#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check. 
 * This function checks the value of n and prints:
 * - '+' if n is greater than zero,
 * - '0' if n is zero,
 * - '-' if n is less than zero.
 * Return: 1 if n is positive, 0 if n is zero, and -1 if n is negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar('\n');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
else
{
_putchar('-');
_putchar('\n');
return (-1);
}
}
