#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copie les n premiers caractères de src dans dest.
 * @dest: Chaîne de destination.
 * @src: Chaîne source.
 * @n: Nombre de caractères à copier.
 *
 * Return: La chaîne dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
