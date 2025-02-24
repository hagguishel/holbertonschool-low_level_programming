#include "main.h"
/**
 * _isdigit - Vérifie si un caractère est en majuscule
 * @c: Caractère à vérifier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isdigit(int c)
{
	if (c <= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
