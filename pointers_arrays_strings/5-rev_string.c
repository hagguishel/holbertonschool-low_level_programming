#include "main.h"
#include <stdio.h>
/**
 * rev_string - Fonction qui inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères |  inverser.
 *
 * Cette fonction modifie la chaîne en place sans utilise mémoire supplémeni
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (i = 0; i < j; j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
	}
}
