#include "main.h"
/**
 * _isupper - Vérifie si un caractère est en majuscule
 * @c: Caractère à vérifier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
