#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked list
 * @h: the head of the dlistint_t list
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
