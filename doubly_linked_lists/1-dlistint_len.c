#include <stdlib.h>
#include "lists.h"
/**
* add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t.
* @head: Double pointeur vers le début de la liste.
* @n: Valeur à insérer dans le nouveau nœud.
*
* Return: Adresse du nouvel élément, ou NULL en cas d'échec.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
