#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne
 * @str: Pointeur vers la chaîne de caractères
 */
void puts_half(char *str)
{
int num;
int i;
int start;
for (num = 0; str[num] != '\0'; num++)
;
start = (num % 2 == 0) ? num / 2 : (num / 2) + 1;
for (i = start; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
