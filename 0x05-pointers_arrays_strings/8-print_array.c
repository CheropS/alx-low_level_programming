#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @f: pointer to be updated
 * @g: number of elements
 * Return: void
 */

void print_array(int *f, int g)
{
	int x;

	x = 0;
	while (x < g)
	{
		printf("%d", f[x]);

		if (x < g - 1)
		{
			printf(", ");
		}

		x++;
	}

	printf("\n");
}
