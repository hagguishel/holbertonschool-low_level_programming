#include "main.h"
#include <stdio.h>

/**
 * rev_string - Fonction qui inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à inverser.
 *
 * Cette fonction modifie
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (i = 0; i < j; j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
	}
}
