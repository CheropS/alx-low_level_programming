#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string s
 * @accept: second string
 * Return: pointer to s that matches accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (NULL);
}
