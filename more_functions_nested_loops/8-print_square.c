#include "main.h"
/**
 * print_square - Affiche un carré de taille donnée.
 * @size: La taille du carré à afficher.
 *
 * Description: La fonction affiche un carré de caractère '#' de 
 * dimension size x size. Si size est inférieur ou égal à 0, 
 * elle affiche simplement une nouvelle ligne.
 */
void print_square(int size)
{
	int i, j;
if (size <= 0)
{
	_putchar('\n');
}
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
