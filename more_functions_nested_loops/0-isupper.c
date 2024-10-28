#include "main.h"
/**
 * _isupper - Vérifie si un caractère est une majuscule.
 * @c: Caractère à vérifier (code ASCII).
 *
 * Retourne 1 si `c` est une lettre majuscule (de 'A' à 'Z'),
 * sinon retourne 0.
 *
 * Return: 1 si majuscule, 0 sinon.
 */

int _isupper(int c)
{
int issuper;
for (issuper = 'A'; issuper <= 'Z'; issuper++)
{
if (issuper == c)
return (1);
}
return (0);
}
