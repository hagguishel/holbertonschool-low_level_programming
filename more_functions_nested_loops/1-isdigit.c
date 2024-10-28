#include "main.h"
/**
 * _isdigit - Vérifie si un caractère est un chiffre (0 à 9)
 * @c: Caractère à vérifier (code )
 * Return: 1 si `c` est un chiffre, 0 sinon.
 */

int _isdigit(int c)
{
int A;
for (; A <= '9'; A++)
{
if (A == c)
	return (1);
}
return (0);
}
