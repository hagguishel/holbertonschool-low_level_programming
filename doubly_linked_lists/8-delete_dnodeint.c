#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à un index donné
 *                            dans une liste doublement chaînée.
 * @head: Pointeur vers un pointeur de la tête de la liste.
 * @index: Index du nœud à supprimer (commençant à 0).
 *
 * Return: 1 si la suppression a réussi, -1 en cas d'échec.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !*head)
	return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index; i++)
	current = current->next;
	if (!current)
        return (-1);

	if (current->next)
	current->next->prev = current->prev;
	if (current->prev)
	current->prev->next = current->next;

	free(current);
	return (1);
}
