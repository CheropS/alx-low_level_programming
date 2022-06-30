#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates arrays of int
 * @max: maximum value of integer
 * @min: minimum value of integer
 * Return: min > max, malloc fails - NULL, otherwise array.
 */

int *array_range(int min, int max)
{
	int *array, base, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (base = 0; base < size; base++)
		array[base] = min++;

	return (array);
}
