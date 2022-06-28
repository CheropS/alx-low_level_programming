#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: character
 * Return: Always 0.
 */

char *_strdup(char *str);
{
	int a, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (a = 0; a < end; a++)
		array[a] = str[a];

	if (array == NULL)
		return (NULL);
	return (array);
}
