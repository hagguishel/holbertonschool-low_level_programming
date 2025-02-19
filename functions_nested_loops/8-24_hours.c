#include "main.h"
/**
 * jack_bauer - Affiche chaque minute de la journée (00:00 à 23:59).
 *
 * Utilise deux boucles imbriquées pour afficher les heures et minutes
 * au format HH:MM, une fois par minute, et ajoute un saut de ligne après chaque affichage.
 */
void jack_bauer(void)
{
	int MM;
	int HH;

	for (HH = 0; HH < 24; HH++)
	{
		for (MM = 0; MM < 60; MM++)
		{
		_putchar((HH / 10) + '0');
		_putchar((HH % 10) + '0');
		_putchar(':');
		_putchar((MM / 10) + '0');
		_putchar((MM % 10) + '0');
		_putchar('\n');
		}
	}
}
