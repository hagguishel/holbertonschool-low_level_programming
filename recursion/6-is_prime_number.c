#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est premier.
 *
 * @n: L'entier à tester.
 *
 * Return: 1 si premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_helper(n, 2));
}

/**
 * find_helper - Fonction récursive pour tester si un nombre est premier.
 *
 * @a: Le nombre à tester.
 * @diviseur: Le diviseur actuel à tester.
 *
 * Return: 1 si a est premier, 0 sinon.
 */

int find_helper(int a, int diviseur)
{
	if (a == diviseur)
	{
		return (1);
	}
	else if (a % diviseur == 0)
	{
		return (0);
	}
	else
	{
		return (find_helper(a, diviseur + 1));
	}
}

