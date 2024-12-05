#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of the list.
 * @head: Pointer to the first element in the list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
