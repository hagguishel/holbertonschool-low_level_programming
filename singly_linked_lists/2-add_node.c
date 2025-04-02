#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;

	*head = new_node;


	return (new_node);
}
