#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée de 00:00 à 23:59
 */
void jack_bauer(void)
{
int heures, minutes;
for (heures = 0; heures < 24; heures++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar('0' + (heures / 10));
_putchar('0' + (heures % 10));
_putchar(':');
_putchar('0' + (minutes / 10));
_putchar('0' + (minutes % 10));
_putchar('\n');
}
}
}
