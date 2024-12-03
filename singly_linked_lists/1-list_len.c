#include <stdio.h>
#include "lists.h"
/**
 * list_len - compte le nombre d'éléments dans une liste de type list_t
 * @h: pointeur vers le premier nœud de la liste
 *
 * Return: le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
