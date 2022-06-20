#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a char in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurence of c in string s or NULL if c not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
