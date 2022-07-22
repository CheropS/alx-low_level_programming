#include "main.h"
#include <stdio.h>


/**
 * flip_bits - returns the number of bits you would like to flip
 * @m: flipped number
 * @n: one of the numbers to be flipped
 * Return: number of bits.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
