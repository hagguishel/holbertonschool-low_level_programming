#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Free a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	if (head == NULL)
	return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
