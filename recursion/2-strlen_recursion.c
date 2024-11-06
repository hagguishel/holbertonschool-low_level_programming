#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractèr
 * @s: Pointeur vers la chaîne de caractère
 * Return: La longueur de la chaîn.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
