#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns sum of all data in a linked list
 * @head: pointer to the head
 * Return: empty list 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
