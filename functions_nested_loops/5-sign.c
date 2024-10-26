#include "main.h"
#include <stdio.h>

/*
 * print_sign - Determines the sign of a number.
 * @n: The integer to check.
 * This function prints the sign of the number n:
 * - prints '+' if n is positive,
 * - prints '0' if n is zero,
 * - prints '-' if n is negative.
 * Return: 1 if n is positive, 0 if n is zero, and -1 if n is negative.
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+\n");
return (1);
}
else if (n == 0)
{
printf("0\n");
return (0);
}
else
{
printf("-\n");
return (-1);
}
}
