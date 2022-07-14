#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - function that adds a new node at the beg list
 * @head: a pointer to the head of the list
 * @str: string to be added
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = cpy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

