#include "main.h"

/**
 * reverse_array - reverse the conent of an array of integers
 * @a: contents of array
 * @n: number of elements in the array
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
    int f, base;

	for (base = n - 1; base >= n / 2; base--)
	{
		f = a[n - 1 - base];
		a[n - 1 - base] = a[base];
		a[base] = f;
	}
}
