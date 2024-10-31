#include "main.h"
/**
 * _puts - Affiche une chaîne suivie d'une nouvelle ligne
 * @str: La chaîne de caractères à affic
 * Parcourt la chaîne `str` et affiche chaque caractère avec `_putchar`.
 * Ajoute un saut de ligne après la chaîn
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; str++)
	_putchar(str[i]);
_putchar('\n');
}
