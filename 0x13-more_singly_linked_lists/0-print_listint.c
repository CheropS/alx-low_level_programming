#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the head of a list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = o;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes)
}
