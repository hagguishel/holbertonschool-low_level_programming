#include "lists.h"
/**
 * add_node_end - Adds a new node at the tail of a list_t list
 * @head: Double pointer to the list's head
 * @str: String to duplicate into the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *copy;
	unsigned int len = 0;

	if (!str)
		return (NULL);

	copy = strdup(str);
	if (!copy)
		return (NULL);

	while (copy[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(copy);
		return (NULL);
	}

	new_node->str = copy;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
