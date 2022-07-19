#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head of a node in a linked list
 * @head: head of a pointer
 * Return: Always 0 if successful.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
