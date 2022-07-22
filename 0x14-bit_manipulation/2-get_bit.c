#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns value of a bit at a given index
 * @index: index of bit from 0
 * @n: the bit
 * Return: value of bit otherwise -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
