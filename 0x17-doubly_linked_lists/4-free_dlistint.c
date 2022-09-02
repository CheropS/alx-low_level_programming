#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ngr;

	while (head)
	{
		ngr = head->next;
		free(head);
		head = ngr;
	}
}
