#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @index: index starting from 0
 * @n: integer to the pointer
 * Return: 1 is successful, otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
