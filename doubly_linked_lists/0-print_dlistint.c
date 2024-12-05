#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Affiche tous les éléments d'une listdouble
 * @h: Pointeur vers le premier nœud (tête) de la liste.
 *
 * Return: Le nombre total de nœuds dans la liste.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
