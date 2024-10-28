#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9, sauf 2 et 4
 * Return: Aucun retour (void).
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
