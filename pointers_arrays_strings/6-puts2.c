#include "main.h"
#include <stdio.h>
/**
 * puts2 - Affiche chaque deuxième caractère d'une chaîne
 * @str: Pointeur vers la chaîne de caractères à affich
 * Cette fonction parcourt la chaîne `str` et imprime
 * chaque deuxième caractère, suivi d'une nouvelle ligne.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i += 2;
}
_putchar('\n');
}
