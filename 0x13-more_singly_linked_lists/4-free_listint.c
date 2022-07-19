#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of a poiner
 * Return: free'd list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
