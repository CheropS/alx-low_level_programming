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
	int sum1 = 0;
	int sum2 = 0;

	while (w < size)
	{
		sum1 = sum1 + *(a + w * size + w);
		sum2 = sum2 + *(a + w * size + size - w - 1);
		w++;
	}
	printf("%d, %d\n", sum1, sum2);
}
