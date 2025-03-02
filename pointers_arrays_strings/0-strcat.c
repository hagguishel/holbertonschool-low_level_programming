#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: La chaîne de caractères à laquelle `src` sera ajoutée.
 * @src: La chaîne de caractères à ajouter à `dest`.
 *
 * Description:
 * Cette fonction prend une chaîne `src` et l'ajoutela fin de la chaînedest
 * Elle modifie directement `dest` en y ajoutant tous les caractères de'sr'
 * avant d'ajouter un caractère null '\'la fin pour marquer la fin de chaine
 *
 * Return: La chaîne `dest` après avoir ajouté la chaîne `src`.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

		while (dest[i] != '\0')
		{
			i++;
		}

		while (src[j] != '\0')
	{
			dest[i] = src[j];
			i++;
			j++;
	}
		dest[i] = '\0';
		return (dest);
}
