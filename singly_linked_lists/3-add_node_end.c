#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Ajoute un nouveau nœud �la fin de la liste chaînée.
 * @head: Un pointeur vers le premier nœud de la liste.
 * @str: La chaîne de caractères à ajouter dans le nouveau nœud
 *
 * Return: Un pointeur vers le nouveau nœud, ou NULL si une erreur se produit
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
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
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
