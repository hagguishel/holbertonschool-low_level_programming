#include "main.h"
/**
 * _pow_recursion - Calcule x élevé à la puissance y.
 * @x: La base.
 * @y: L'exposant.
 * Return: Le résultat de x^y, ou -1 si y est inférieur à 0.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
