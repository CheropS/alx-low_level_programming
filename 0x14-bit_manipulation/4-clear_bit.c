#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: integer to pointer
 * @index: index starting at 0
 * Return: 1 if successful, otherwise -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	{
		*n &= ~(1 << index);
	}
	
	return (1);
}
