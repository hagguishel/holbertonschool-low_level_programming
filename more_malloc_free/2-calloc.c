#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zé
 * @nmemb: Nombre d'éléments dans le tableau
 * @size: Taille en octets de chaque élé
 * Return: Pointeur vers la mémoire allouée, ou NULL si erre
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	((char *)ptr)[i] = 0;
	return (ptr);
}
