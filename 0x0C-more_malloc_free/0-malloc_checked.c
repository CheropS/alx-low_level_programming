#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *malloc_checked - function that allocates memory
 * @b: integer
 * Return: 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
