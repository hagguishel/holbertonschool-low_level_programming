#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *locator;

	while (head != NULL)
	{
		locator = head;
		head = head->next;

		free(locator->str);
		free(locator);
	}
}
