#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatène les n premiers caractères de s de dest
 * @dest: La chaîne de caractè les n premiers caractères src ont ajoue
 * @src: La chaîne de caractères dont les nremiers caractères seront ajout�
 * @n: Le nombre maximal de caractères de sr concatener
 *
 * Description:
 * fonction ajoute les n premiers caractères de la chaîne `s'fin de la chaine
 * Si `src` contient moins de n caractères, tous les caractères de `srcajoute
 * Après la concaténation, un caractère null ('\0') est ajo a la fin de dest
 *
 * Return: La chaîne `dest` après l'ajout den premiers caractères de `src`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
