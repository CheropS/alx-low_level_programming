#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: index of the new list where the new node should be added
 * @h: pointer to the head f the list
 * @n: integer for the new node to contain
 * Return: address of the new node, otherwse NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ngr = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		ngr = ngr->next;
		if (ngr == NULL)
			return (NULL);
	}

	if (ngr->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = ngr;
	new->next = ngr->next;
	ngr->next->prev = new;
	ngr->next = new;

	return (new);
}
