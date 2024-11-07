#include "main.h"
#include <math.h>

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à tester.
 * @i: Le diviseur potentiel pour vérifier si n est divisible
 * Return: 1 si le nombre est premier, sinon 0.
 */
int foncrion_deux(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3)
return (1);
return (foncrion_deux(n, 2));
}
/**
 * foncrion_deux - Fonction auxiliaire pour vérifier si un nombre est premier
 * @n: Le nombre à tester
 * @i: Le diviseur potentiel pour vérifier si n est divisible
 * Return: 1 si n est premier, sinon 0.
 */
int foncrion_deux(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (foncrion_deux(n, i + 1));
}
