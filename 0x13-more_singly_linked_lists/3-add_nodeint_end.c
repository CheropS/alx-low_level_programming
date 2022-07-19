#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint_end - adds a new node at the end of a list
 * @head: head of the pointer
 * @n: the integer for the new node
 * Return: address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
