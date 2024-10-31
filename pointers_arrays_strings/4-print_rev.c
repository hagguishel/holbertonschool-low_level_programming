#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en revers
 *              suivie d'une nouvelle ligne.
 * @s: Pointeur vers la chaîne de caractères à afficher en rever
 * Cette fonction parcourt la chaîne `s` pour déterminer sa longueu
 * puis imprime les caractères de la chaîne en ordre invers
 */
void print_rev(char *s)
{
int l, i;
for (l = 0; s[l] != '\0'; l++)
;
for (i = l - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

