#include "lists.h"
#include <stdio.h>
#include <string.h>


/**
 * *add_node_end - function that adds a new node at te end of the list
 * @head: a pointe to the list
 * @str: string to be duplicated
 * Return: address of a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cpy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = cpy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
