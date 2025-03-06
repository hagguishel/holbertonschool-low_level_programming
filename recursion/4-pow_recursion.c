#include "main.h"
/**
 * _pow_recursion - Calcule x^y récursivement.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: x^y ou -1 si y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
