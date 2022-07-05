#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of element array
 * Return: if nmemb = 0, size = 0, function fails - NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filter;
	unsigned int base;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filter = mem;

	for (base = 0; base < (size * nmemb); base++)
		filter[base] = '\0';

	return (mem);
}
