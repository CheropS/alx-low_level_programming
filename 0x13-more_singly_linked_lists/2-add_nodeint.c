#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - function that adds a new node at the beg of list
 * @n: number of nodes
 * @head: header pointer
 * Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
