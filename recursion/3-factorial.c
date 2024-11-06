#include "main.h"

/**
 * factorial - Calcule le facteur d'un nombre n de manière récursiv
 * @n: Le nombre dont on veut calculer le facteur.
 * Return: Le facteur de n, ou -1 si n est négatif.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
