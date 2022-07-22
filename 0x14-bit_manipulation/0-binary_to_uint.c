#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number otherwise 0.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int len;

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * base;
		base *= 2;
	}

	return (num);
}
