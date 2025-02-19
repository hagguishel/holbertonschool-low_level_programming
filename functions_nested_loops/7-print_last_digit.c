#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Affiche et retourne le dernier chiffre d'un nombre
 * @n: L'entier dont on veut extraire le dernier chiffre
 *
 * Description: Cette fonction extrait le dernier chiffre d'un entier `n`,
 * l'affiche à l'aide de `_putchar`, puis retourne sa valeur absolue.
 */
int print_last_digit(int n)
{
	int b;

	b = abs(n % 10);
	_putchar(b + '0');
	return (b);
}
