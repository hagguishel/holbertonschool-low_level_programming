#include "main.h"
/**
* _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre
* @n: Le nombre pour lequel on cherche la racine carrée
*
* Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
/**
* _sqrt_helper - Aide pour calculer la racine carrée en testant chaque valeur.
* @n: Le nombre pour lequel on cherche la racine carrée.
* @x: Le compteur qui teste les valeurs de 0 |  n.
*
* Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas.
*/
int _sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (_sqrt_helper(n, x + 1));
}
