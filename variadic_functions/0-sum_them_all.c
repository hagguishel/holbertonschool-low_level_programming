#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous les paramètres.
 * @n: Le nombre d'arguments.
 *
 * Return: La somme des arguments, ou 0 si n est 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int result = 0;

	if (n == 0 )
		return (0);

	va_start (arg, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg (arg, unsigned int);
	}
	va_end (arg);

	return (result);
}
