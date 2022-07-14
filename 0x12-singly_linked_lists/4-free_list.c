#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - function that frees a list
 * @head: pointer to the list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *cat;

	while (head)
	{
		cat = head->next;
		free(head->str);
		free(head);
		head = cat;
	}
}
