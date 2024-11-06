#include "main.h"
/**
 * _print_rev_recursion - Imprime une chaîne en ordre inverse
 * @s: Pointeur vers la chaîne de caractères à impri
 * Description: Cette fonction utilise la récursivité pour parcour
 * la chaîne de caractères jusqu'à sa fin, puis imprime chaque caractè
 * dans l'ordre inverse lorsque la pile de récursion commence à se vide.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
