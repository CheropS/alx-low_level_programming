#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: integer
 * @s: pointed to
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
