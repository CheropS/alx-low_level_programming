#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals in a square matrix
 * @a: size of the array
 * @size: the size of the array
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int w = 0;
	int x = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (w <= (size * size))
	{
		sum1 = sum2 + a[w];
		w = w + size + 1;
	}

	while (x < (size * size - 1))
	{
		sum2 += a[x];
		x = x + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
