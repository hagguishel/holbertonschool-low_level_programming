#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where to insert
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int index = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && index < idx)
	{
		temp = temp->next;
		index++;
	}

	if (!temp && index != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp ? temp->prev : NULL;

	if (temp && temp->prev)
		temp->prev->next = new_node;
	else if (!temp)
		return (add_dnodeint_end(h, n));

	else
		*h = new_node;

	if (temp)
		temp->prev = new_node;

	return (new_node);
}
