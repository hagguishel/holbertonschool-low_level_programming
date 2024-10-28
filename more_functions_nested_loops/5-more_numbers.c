#include "main.h"

/**
 * more_numbers - Affiche dix fois les nombres de 0 à 14.
 * Return: Aucun retour (void).
 */
void more_numbers(void)
{
int ligne, nombre;
for (ligne = 0; ligne < 10; ligne++)
{
for (nombre = 0; nombre <= 14; nombre++)
{
if (nombre >= 10)
_putchar((nombre / 10) + '0');
_putchar((nombre % 10) + '0');
}
_putchar('\n');
}
}
