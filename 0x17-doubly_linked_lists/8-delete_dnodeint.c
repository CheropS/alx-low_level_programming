#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head of a linked list
 * @index: index of the node to delete
 * Return: If succeeded 1, otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ngr;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (ngr == NULL)
			return (-1);
		ngr = ngr->next;
	}

	if (ngr == *head)
	{
		*head = ngr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		ngr->prev->next = ngr->next;
		if (ngr->next != NULL)
			ngr->next->prev = ngr->prev;
	}

	free(ngr);
	return (1);
}
