#include "main.h"

/**
*_isalpha - Vérifie si un caractère est alphabétique (minuscule ou ma
*@c: Caractère |  v
*
*Return: 1 si le caractère est une lettre alphabéti
*/
int _isalpha(int c)
{
int is_lower = (c >= 'a' && c <= 'z');
int is_upper = (c >= 'A' && c <= 'Z');
if (is_lower || is_upper)
{
return (1);
}
return (0);
}
