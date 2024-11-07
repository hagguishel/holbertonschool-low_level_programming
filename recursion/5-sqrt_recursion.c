#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée d'un nombre donn�
 * @n: Le nombre pour lequel on cherche la racine carrée
 * Return: La racine carrée de `n` si elle existe, sinon -1 si `n` est négatif
 */
int _sqrt_recursion(int n)
{
	int x = 1;
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x));
}

/**
 * _sqrt_helper - Fonction auxiliaire pour calculer la racine carrée
 * @n: Le nombre pour lequel on cherche la racine carrée
 * @x: L'entier qui est testé pour être la racine carrée de `
 * Return: La racine carrée de `n` si elle existe, sinon -.
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x + 1));
}
