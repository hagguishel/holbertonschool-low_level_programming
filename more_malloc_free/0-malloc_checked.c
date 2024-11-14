#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire et vérifie l'allocation
 * @b: nombre d'octets à alloue
 * Return: pointeur vers la mémoire allouée, ou termine le programme avec
 * un statut de 98 si l'allocation échoue
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
