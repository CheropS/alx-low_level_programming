#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: value of integer 1
 * @b: value of integer 2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
