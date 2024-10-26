#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Affiche tous les entiers de n à 98
 * @n: Le nombre à partir duquel commencer l'affichage
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
printf(", ");
}
}
}
printf("\n");
}
}
