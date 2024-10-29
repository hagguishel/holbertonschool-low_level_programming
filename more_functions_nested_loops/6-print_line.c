#include "main.h"

/**
 * print_line - Dessine une ligne de caractères'_'
 * @n: Nombre de caractères '_' à affich
 * Description: La fonction prend un entier `n` comme argument.
 * Si `n` est supérieur à 0, elle affiche `n` caractères '_' à la su
 * Ensuite, elle ajoute un retour à la ligne
 */
void print_line(int n)
{
int pl = 0;
if (n > 0)
{
while (pl < n)
{
_putchar('_');
pl++;
}
}
_putchar('\n');
}

