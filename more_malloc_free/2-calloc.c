#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
 * @nmemb: Nombre d'éléments.
 * @size: Taille de chaque élément.
 *
 * Return: Pointeur vers la mémoire allouée ou NULL en cas d'erreur.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tab;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc(nmemb * size);

	if (tab == NULL)
		return (NULL);

	ptr = (char *)tab;

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (tab);

}
