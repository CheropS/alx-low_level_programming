#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @index: index of the node
 * @head: beginning of the node
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
