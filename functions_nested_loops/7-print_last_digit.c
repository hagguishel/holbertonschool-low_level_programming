#include "main.h"
#include <stdlib.h>
/**
 * _abs - Calcule la valeur absolue d'un entier
 * @n: L'entier dont on veut la valeur absolue
 *
 * Return: La valeur absolue de n
 */
int print_last_digit(int n)
{
	int b;

	b = abs(n % 10);
	_putchar(b + '0');
	return (b);
}
