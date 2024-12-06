#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * in a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !*head)
	return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (!current)
	return (-1);
	if (current->next)
	current->next->prev = current->prev;
	if (current->prev)
	current->prev->next = current->next;

	free(current);
	return (1);
}
