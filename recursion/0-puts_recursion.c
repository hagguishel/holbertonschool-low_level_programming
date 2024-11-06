#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Imprime une chaîne suivie d'une nouvelle ligne
 * @s: Pointeur vers la chaîne à imprim
 * Description: Imprime la chaîne de manière récursive jusqu'à '\0'
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
