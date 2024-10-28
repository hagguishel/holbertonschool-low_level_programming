#include "main.h"
/**
 * print_numbers - Affiche les chiffres de 0 à 9.
 * Return: Aucun retour (void).
 */
void print_numbers(void)
{
int A;
for (A = 0; A <= 9; A++)
_putchar (A + '0');
_putchar ('\n');
return (0);
}
