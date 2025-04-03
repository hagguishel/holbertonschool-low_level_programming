#include "lists.h"
/**
 * sum_dlistint - Sums all the data (n) in a doubly linked list.
 * @head: Pointer to the first node.
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
